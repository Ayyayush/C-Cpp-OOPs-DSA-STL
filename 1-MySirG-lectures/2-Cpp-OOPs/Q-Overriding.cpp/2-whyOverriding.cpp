
WHY OVERRIDING.CPP

class car
{
public :
 void shiftgear()
 {....}
 }


class sportscar : public car
{
yaha pe hum changegear naam se function bana skte h par hum aisa nhi krte h kyunki hum class car ke shiftgear ko moidfy krna chahte h par kr nhi skte directly.
so hum same naam ka function yha bana ke yha modify krte h kyunki sportscar ka obj call karega toh early binding ki wajeh se yhi chalega pehle

public :
void shiftgear()
{...}
}


sportscar obj;
obj.shiftgear();       // ab sportscar mein shiftgear naam ka object nhi h toh obj cqar class ke shiftgear ko call karega



ab hume chahiye ki bhale hi shiftgear na ho child class meiin par sportscar ka gear mechanismn alag hoga car se toh class car ke shiftgear ko modify kar sake
aur class car ka object bana ke shiftgear ko call kare toh bhi same code hi chalega isliye hume alag alag code likhna chahiye dono ke liye

LISTEN :--
hum code ke through changegear aur shiftgear dono ko call krne ka dum rakhte h 
par sportcar ke obj se shiftgear ko call karenge toh pehle sportscar mein koi issi naam se function hua toh pehle whi chalega

NOTE :=
whenever you want to mopdify a class then do inheritance
whenever you want to moidfy a method of base class with respect to derived class then do overriding
