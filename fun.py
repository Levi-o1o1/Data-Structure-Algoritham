import turtle as t


def retangle(hori, verti, color):
    t.pendown()
    t.pensize()
    t.color(color)
    t.begin_fill()
    for counter in range(1, 3):
        t.forward(hori)
        t.right(90)
        t.forward(verti)
        t.right(90)
    t.end_fill()
    t.penup()

t.penup()
t.speed('slow')
t.bgcolor('dodger blue')
#feet
t.goto(-100, -150)
retangle(50, 20 , 'blue') # rectangle
t.goto(-30, -150)
retangle(50, 20, 'blue')
#legs
t.goto(-25, -50)
retangle(15, 100, 'grey')
t.goto(-55, -50)
retangle(-15, 100, 'grey')
    #body
t.goto(-90, 100)
retangle(100, 150, 'red')
#arms
t.goto(-150, 70)
retangle(60, 15, 'grey')
t.goto(-150, 110)
retangle(15, 40, 'grey')
t.goto(10, 70)
retangle(60, 15, 'grey')
t.goto(55, 110)
retangle(15, 40, 'grey')
#neck
t.goto(-50, 120)
retangle(15, 20, 'grey')
#head
t.goto(-85, 170)
retangle(80, 50, 'red')
#eyes
t.goto(-60, 160)
retangle(30, 10, 'white')
t.goto(-55, 155)
retangle(5,5,'black')
t.goto(-40, 155)
retangle(5, 5, 'black')
#mouth
t.goto(-65, 135)
retangle(40, 5, 'black')


t.hideturtle()
