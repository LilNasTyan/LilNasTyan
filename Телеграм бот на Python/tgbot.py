import telebot
import time
from telebot import types

from texts import chislo_soznaniya1, chislo_soznaniya2, chislo_soznaniya3, chislo_soznaniya4, chislo_soznaniya5, chislo_soznaniya6, chislo_soznaniya7, chislo_soznaniya8, chislo_soznaniya9
from texts import chislo_deistviya1, chislo_deistviya2, chislo_deistviya3, chislo_deistviya4, chislo_deistviya5, chislo_deistviya6, chislo_deistviya7, chislo_deistviya8, chislo_deistviya9, podvodka_chislo_deistviya
from texts import lichniy_god1, lichniy_god2, lichniy_god3, lichniy_god4, lichniy_god5, lichniy_god6, lichniy_god7, lichniy_god8, lichniy_god9, podvodka_lichniy_god

bot = telebot.TeleBot('TOKEN')

# Словарь для хранения имен пользователей
user_names = {}

@bot.message_handler(commands=['start'])
def start(message):
    chat_id = message.chat.id
    first1_text = ('Позволь представиться, с тобой на связи Радик Киряев \n\n'
                   '🔸 Сертифицированный мастер цифровой психологии и энергокоучинга \n'
                   '🔸 Амбассадор академии цифровой психологии Алекса Ройтблата\n\n'
                   'В этом боте уже следующим сообщением мы отправим тебе то, зачем ты пришёл:\n\n'
                   '👉🏼 Распаковку твоего потенциала.\n'
                   '👉🏼 Прогноз на ближайший год.\n '
                   '👉🏼 Сможешь спрогнозировать свой год исходя из влияния энергии планет на тебя.')
    RadikKiryaev = '123.jpg'
    with open(RadikKiryaev, 'rb') as image:
        bot.send_photo(chat_id, image, caption=first1_text)
    time.sleep(4)
    bot.send_message(chat_id, "Нам важно познакомиться с тобой. Напиши свое имя.\n\nВведи свое имя ниже⤵️")
    bot.register_next_step_handler(message, name)


@bot.message_handler(func=lambda message: True)
def name(message):
    chat_id = message.chat.id
    name = message.text
    user_names[chat_id] = name
    first2_text = ('Напиши свою дату рождения, я сделаю расчет и пришлю краткую характеристику по твоей дате.\n\n'
                   '📍 Дату рождения пишите в формате DDMMYYYY\n'
                   '📍 Только цифры. Без точек, пробелов и других символов.\n'
                   '📍 Дату можно ввести только 1 раз! Будьте внимательны.\n\n'
                   'Пример: вы родились 08.01.1990. Значит нужно написать: 08011990')
    bot.send_message(chat_id, first2_text)
    bot.register_next_step_handler(message, proverkabd)

@bot.message_handler(func=lambda message: True)
def proverkabd(message):
    global date_of_bd
    chat_id = message.chat.id
    date_of_bd = None
    if len(message.text) == 8 and message.text.isdigit():
        keyboard = telebot.types.InlineKeyboardMarkup()
        yes_button = telebot.types.InlineKeyboardButton(text="Да", callback_data="yes")
        no_button = telebot.types.InlineKeyboardButton(text="Нет", callback_data="no")
        keyboard.add(yes_button, no_button)
        bot.send_message(chat_id, f"Проверь данные, все верно? 🤔\n\n👉{message.text}", reply_markup=keyboard)
        date_of_bd = message.text

    else:
        bot.send_message(chat_id, ('Вы где то допустили ошибку, попробуйте снова😊\n\n'
                                   ' ⤵️ Введи дату рождения в формате ддммгггг\n'
                                   'Например: 15051995'))
    bot.register_next_step_handler(message, chislo_soznaniya)

@bot.callback_query_handler(func=lambda message: message.data == "yes")
def chislo_soznaniya(callback_query):
    global date_of_bd
    chat_id = callback_query.message.chat.id
    if callback_query.data == "yes":
        if date_of_bd is not None:
            first_sum = sum(int(digit) for digit in date_of_bd[:2])
            if first_sum > 9:
                first_sum = sum(int(digit) for digit in str(first_sum))
                if first_sum > 9:
                    first_sum = sum(int(digit) for digit in str(first_sum))
        if first_sum == 1:
            ns1 = 'ns1.jpg'
            with open(ns1, 'rb') as image:
                bot.send_photo(chat_id, image, caption=chislo_soznaniya1)
        elif first_sum == 2:
            ns2 = 'ns2.jpg'
            with open(ns2, 'rb') as image:
                bot.send_photo(chat_id, image, caption=chislo_soznaniya2)
        elif first_sum == 3:
            ns3 = 'ns3.jpg'
            with open(ns3, 'rb') as image:
                bot.send_photo(chat_id, image, caption=chislo_soznaniya3)
        elif first_sum == 4:
            ns4 = 'ns4.jpg'
            with open(ns4, 'rb') as image:
                bot.send_photo(chat_id, image, caption=chislo_soznaniya4)
        elif first_sum == 5:
            ns5 = 'ns5.jpg'
            with open(ns5, 'rb') as image:
                bot.send_photo(chat_id, image, caption=chislo_soznaniya5)
        elif first_sum == 6:
            ns6 = 'ns6.jpg'
            with open(ns6, 'rb') as image:
                bot.send_photo(chat_id, image, caption=chislo_soznaniya6)
        elif first_sum == 7:
            ns7 = 'ns7.jpg'
            with open(ns7, 'rb') as image:
                bot.send_photo(chat_id, image, caption=chislo_soznaniya7)
        elif first_sum == 8:
            ns8 = 'ns8.jpg'
            with open(ns8, 'rb') as image:
                bot.send_photo(chat_id, image, caption=chislo_soznaniya8)
        elif first_sum == 9:
            ns9 = 'ns9.jpg'
            with open(ns9, 'rb') as image:
                bot.send_photo(chat_id, image, caption=chislo_soznaniya9)
        else:
            bot.send_message(chat_id, "Что-то пошло не так. Напишите /start и заполните данные заново.")
    elif callback_query.data == "no":
        bot.send_message(chat_id, "Что-то пошло не так. Напишите /start и заполните данные заново.")
    proverkadeistviya(callback_query.message)

@bot.message_handler(func=lambda message: True)
def proverkadeistviya(message):
    global date_of_bd
    chat_id = message.chat.id
    if date_of_bd is not None and date_of_bd.isdigit():
       time.sleep(60)
       aga = telebot.types.InlineKeyboardMarkup()
       yes_button2 = telebot.types.InlineKeyboardButton(text="Да", callback_data="yesyes")
       aga.add(yes_button2)
       bot.send_message(chat_id, "Ты хочешь узнать свое число действия исходя из даты рождения? 🔥", reply_markup=aga)
       bot.register_next_step_handler(message, chislo_deistviya)
    else:
        bot.send_message(chat_id, "Что-то пошло не так. Напишите /start и заполните данные заново.")

@bot.callback_query_handler(func=lambda message: message.data == "yesyes")
def chislo_deistviya(callback_query):
    global date_of_bd
    chat_id = callback_query.message.chat.id
    if callback_query.data == "yesyes":
        if date_of_bd is not None:
            second_sum = sum(int(digit) for digit in date_of_bd)
            if second_sum > 9:
                second_sum = sum(int(digit) for digit in str(second_sum))
                if second_sum > 9:
                    second_sum = sum(int(digit) for digit in str(second_sum))
                if second_sum == 1:
                    bot.send_message(chat_id, f"{podvodka_chislo_deistviya}")
                    nd1 = 'nd1.jpg'
                    with open(nd1, 'rb') as image:
                        bot.send_photo(chat_id, image, caption=chislo_deistviya1)
                elif second_sum == 2:
                    bot.send_message(chat_id, f"{podvodka_chislo_deistviya}")
                    nd2 = 'nd2.jpg'
                    with open(nd2, 'rb') as image:
                        bot.send_photo(chat_id, image, caption=chislo_deistviya2)
                elif second_sum == 3:
                    bot.send_message(chat_id, f"{podvodka_chislo_deistviya}")
                    nd3 = 'nd3.jpg'
                    with open(nd3, 'rb') as image:
                        bot.send_photo(chat_id, image, caption=chislo_deistviya3)
                elif second_sum == 4:
                    bot.send_message(chat_id, f"{podvodka_chislo_deistviya}")
                    nd4 = 'nd4.jpg'
                    with open(nd4, 'rb') as image:
                        bot.send_photo(chat_id, image, caption=chislo_deistviya4)
                elif second_sum == 5:
                    bot.send_message(chat_id, f"{podvodka_chislo_deistviya}")
                    nd5 = 'nd5.jpg'
                    with open(nd5, 'rb') as image:
                        bot.send_photo(chat_id, image, caption=chislo_deistviya5)
                elif second_sum == 6:
                    bot.send_message(chat_id, f"{podvodka_chislo_deistviya}")
                    nd6 = 'nd6.jpg'
                    with open(nd6, 'rb') as image:
                        bot.send_photo(chat_id, image, caption=chislo_deistviya6)
                elif second_sum == 7:
                    bot.send_message(chat_id, f"{podvodka_chislo_deistviya}")
                    nd7 = 'nd7.jpg'
                    with open(nd7, 'rb') as image:
                        bot.send_photo(chat_id, image, caption=chislo_deistviya7)
                elif second_sum == 8:
                    bot.send_message(chat_id, f"{podvodka_chislo_deistviya}")
                    nd8 = 'nd8.jpg'
                    with open(nd8, 'rb') as image:
                        bot.send_photo(chat_id, image, caption=chislo_deistviya8)
                elif second_sum == 9:
                    bot.send_message(chat_id, f"{podvodka_chislo_deistviya}")
                    nd9 = 'nd9.jpg'
                    with open(nd9, 'rb') as image:
                        bot.send_photo(chat_id, image, caption=chislo_deistviya9)
                else:
                    bot.send_message(chat_id, f"Что-то пошло не так. Напишите /start и заполните данные заново.")
            else:
                bot.send_message(chat_id, f"Что-то пошло не так. Напишите /start и заполните данные заново.")
        else:
            bot.send_message(chat_id, "Что-то пошло не так. Напишите /start и заполните данные заново.")
    else:
        bot.send_message(chat_id, "Что-то пошло не так. Напишите /start и заполните данные заново.")
    linka(chat_id)

def linka(chat_id):
    global date_of_bd
    if date_of_bd is not None and date_of_bd.isdigit():
        time.sleep(60)
        keyboard3 = telebot.types.InlineKeyboardMarkup()
        give_year = telebot.types.InlineKeyboardButton(text="Получить расчёт", callback_data="giveyear")
        keyboard3.add(give_year)
        bot.send_message(chat_id, f"В подарок я хочу дать тебе личный расчёт на 2024 год! В нем ты узнаешь свой секрет квантового скачка во всех сферах жизни.", reply_markup=keyboard3)
    else:
        bot.send_message(chat_id, "Что-то пошло не так. Напишите /start и заполните данные заново.")

@bot.callback_query_handler(func=lambda message: message.data == "giveyear")
def year(callback_query):
    global date_of_bd
    global first_sum
    chat_id = callback_query.from_user.id
    if callback_query.data == "giveyear":
        if date_of_bd is not None:
            personal_year = sum(int(digit) for digit in date_of_bd[:4])+8
            if personal_year > 9:
                personal_year = sum(int(digit) for digit in str(personal_year))
            if personal_year == 1:
                bot.send_message(chat_id, f"{podvodka_lichniy_god}")
                ng1 = 'ng1.jpg'
                with open(ng1, 'rb') as image:
                    bot.send_photo(chat_id, image, caption=lichniy_god1)
            elif personal_year == 2:
                bot.send_message(chat_id, f"{podvodka_lichniy_god}")
                ng2 = 'ng2.jpg'
                with open(ng2, 'rb') as image:
                    bot.send_photo(chat_id, image, caption=lichniy_god2)
            elif personal_year == 3:
                bot.send_message(chat_id, f"{podvodka_lichniy_god}")
                ng3 = 'ng3.jpg'
                with open(ng3, 'rb') as image:
                    bot.send_photo(chat_id, image, caption=lichniy_god3)
            elif personal_year == 4:
                bot.send_message(chat_id, f"{podvodka_lichniy_god}")
                ng4 = 'ng4.jpg'
                with open(ng4, 'rb') as image:
                    bot.send_photo(chat_id, image, caption=lichniy_god4)
            elif personal_year == 5:
                bot.send_message(chat_id, f"{podvodka_lichniy_god}")
                ng5 = 'ng5.jpg'
                with open(ng5, 'rb') as image:
                    bot.send_photo(chat_id, image, caption=lichniy_god5)
            elif personal_year == 6:
                bot.send_message(chat_id, f"{podvodka_lichniy_god}")
                ng6 = 'ng6.jpg'
                with open(ng6, 'rb') as image:
                    bot.send_photo(chat_id, image, caption=lichniy_god6)
            elif personal_year == 7:
                bot.send_message(chat_id, f"{podvodka_lichniy_god}")
                ng7 = 'ng7.jpg'
                with open(ng7, 'rb') as image:
                    bot.send_photo(chat_id, image, caption=lichniy_god7)
            elif personal_year == 8:
                bot.send_message(chat_id, f"{podvodka_lichniy_god}")
                ng8 = 'ng8.jpg'
                with open(ng8, 'rb') as image:
                    bot.send_photo(chat_id, image, caption=lichniy_god8)
            elif personal_year == 9:
                bot.send_message(chat_id, f"{podvodka_lichniy_god}")
                ng9 = 'ng9.jpg'
                with open(ng9, 'rb') as image:
                    bot.send_photo(chat_id, image, caption=lichniy_god9)
            else:
                bot.send_message(chat_id, f"Что-то пошло не так. Напишите /start и заполните данные заново.")
        else:
            bot.send_message(chat_id, "Что-то пошло не так. Напишите /start и заполните данные заново.")
    else:
        bot.send_message(chat_id, "Что-то пошло не так. Напишите /start и заполните данные заново.")

bot.infinity_polling()
