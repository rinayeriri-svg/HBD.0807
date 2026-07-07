/* ==========================
   GOOGLE FONTS
========================== */
@import url('https://fonts.googleapis.com/css2?family=Dancing+Script:wght@700&family=Poppins:wght@300;400;500;600&family=Cinzel:wght@600&display=swap');

/* ==========================
   RESET
========================== */
*{
    margin:0;
    padding:0;
    box-sizing:border-box;
}

html{
    scroll-behavior:smooth;
}

body{
    font-family:'Poppins',sans-serif;
    color:white;
    overflow-x:hidden;
    min-height:100vh;

    background:linear-gradient(
        135deg,
        #1A237E,
        #283593,
        #3949AB,
        #5E35B1
    );

    background-size:400% 400%;
    animation:gradientMove 12s ease infinite;
}

/* Animated Gradient */

@keyframes gradientMove{

0%{
background-position:0% 50%;
}

50%{
background-position:100% 50%;
}

100%{
background-position:0% 50%;
}

}

/* ==========================
   STARS
========================== */

body::before{

content:"";

position:fixed;

top:0;
left:0;

width:100%;
height:100%;

background-image:
radial-gradient(white 1px, transparent 1px),
radial-gradient(rgba(255,255,255,.6) 1px, transparent 1px);

background-size:70px 70px,130px 130px;

opacity:.18;

pointer-events:none;

z-index:-1;

}

/* ==========================
   FLOATING HEARTS
========================== */

.hearts span{

position:absolute;

font-size:25px;

animation:float 12s linear infinite;

opacity:.55;

}

.hearts span:nth-child(1){left:8%;animation-delay:0s;}
.hearts span:nth-child(2){left:22%;animation-delay:2s;}
.hearts span:nth-child(3){left:38%;animation-delay:4s;}
.hearts span:nth-child(4){left:55%;animation-delay:1s;}
.hearts span:nth-child(5){left:72%;animation-delay:3s;}
.hearts span:nth-child(6){left:90%;animation-delay:5s;}

@keyframes float{

0%{

transform:translateY(100vh);

}

100%{

transform:translateY(-120vh);

}

}

/* ==========================
   GIFT SCREEN
========================== */

#giftScreen{

display:flex;

flex-direction:column;

justify-content:center;

align-items:center;

height:100vh;

text-align:center;

padding:20px;

}

#giftBox{

font-size:110px;

cursor:pointer;

animation:bounce 2s infinite;

transition:.4s;

}

#giftBox:hover{

transform:scale(1.15);

}

#giftScreen h2{

font-family:'Dancing Script',cursive;

font-size:48px;

margin-top:15px;

}

#giftScreen p{

margin-top:15px;

font-size:18px;

opacity:.9;

}

/* ==========================
   HOME PAGE
========================== */

#homeScreen{

display:flex;

flex-direction:column;

justify-content:center;

align-items:center;

text-align:center;

height:100vh;

padding:20px;

}

.hidden{

display:none;

}

#homeScreen h1{

font-family:'Dancing Script',cursive;

font-size:75px;

margin-bottom:20px;

}

#homeScreen p{

max-width:650px;

line-height:1.8;

margin-bottom:40px;

}

/* ==========================
   BUTTONS
========================== */

.btn{

display:inline-block;

padding:18px 45px;

background:#7E57C2;

color:white;

text-decoration:none;

border-radius:50px;

font-weight:600;

transition:.3s;

box-shadow:0 0 25px rgba(126,87,194,.5);

border:none;

cursor:pointer;

}

.btn:hover{

background:#9575CD;

transform:translateY(-4px);

box-shadow:0 0 35px rgba(149,117,205,.8);

}

/* ==========================
   GENERAL PAGE
========================== */

.page{

min-height:100vh;

padding:80px 30px;

display:flex;

flex-direction:column;

align-items:center;

text-align:center;

}

.page h1{

font-family:'Dancing Script',cursive;

font-size:65px;

margin-bottom:25px;

}

.subtitle{

max-width:700px;

margin-bottom:50px;

line-height:1.8;

opacity:.9;

}

/* ==========================
   REASON CARDS
========================== */

.cards{

display:grid;

grid-template-columns:repeat(auto-fit,minmax(250px,1fr));

gap:25px;

width:100%;

max-width:1100px;

}

.card{

background:rgba(255,255,255,.12);

backdrop-filter:blur(10px);

border:1px solid rgba(255,255,255,.2);

padding:30px;

border-radius:20px;

transition:.4s;

}

.card:hover{

transform:translateY(-10px);

box-shadow:0 0 25px rgba(255,255,255,.25);

}

.card h2{

font-size:40px;

margin-bottom:15px;

}

/* ==========================
   POLAROIDS
========================== */

.photo-wall{

display:flex;

flex-wrap:wrap;

justify-content:center;

gap:35px;

max-width:1200px;

}

.polaroid{

width:240px;

background:white;

padding:12px;

border-radius:8px;

box-shadow:0 12px 30px rgba(0,0,0,.3);

transition:.4s;

}

.polaroid img{

width:100%;

height:260px;

object-fit:cover;

border-radius:5px;

}

.polaroid p{

margin-top:15px;

font-family:'Dancing Script',cursive;

font-size:24px;

color:#4B0082;

}

.rotate-left{

transform:rotate(-5deg);

}

.rotate-right{

transform:rotate(5deg);

}

.polaroid:hover{

transform:scale(1.07) rotate(0deg);

}

/* ==========================
   VIDEOS
========================== */

.video-card{

width:320px;

background:white;

padding:12px;

border-radius:15px;

box-shadow:0 12px 30px rgba(0,0,0,.3);

}

.video-card video{

width:100%;

border-radius:10px;

}

/* ==========================
   CERTIFICATE
========================== */

.certificate{

width:90%;

max-width:850px;

background:white;

color:#4B0082;

padding:50px;

border:12px solid gold;

border-radius:20px;

box-shadow:0 15px 40px rgba(0,0,0,.3);

}

.certificate h2{

font-family:'Cinzel',serif;

font-size:40px;

}

.certificate h3{

font-family:'Dancing Script',cursive;

font-size:55px;

margin:25px 0;

}

.award-text{

line-height:1.8;

margin:20px 0;

}

.seal{

width:180px;

height:180px;

margin:30px auto;

border-radius:50%;

background:gold;

display:flex;

justify-content:center;

align-items:center;

text-align:center;

font-weight:bold;

color:#5A189A;

box-shadow:0 0 20px gold;

padding:20px;

}

.signature{

font-family:'Dancing Script',cursive;

font-size:36px;

margin-top:25px;

}

/* ==========================
   LETTERS
========================== */

.letters{

display:grid;

grid-template-columns:repeat(auto-fit,minmax(300px,1fr));

gap:25px;

width:100%;

max-width:1100px;

}

.letter{

background:rgba(255,255,255,.12);

backdrop-filter:blur(10px);

border:1px solid rgba(255,255,255,.2);

padding:25px;

border-radius:20px;

cursor:pointer;

transition:.3s;

}

.letter:hover{

transform:translateY(-5px);

}

.letter p{

display:none;

margin-top:15px;

line-height:1.8;

}

.letter.open{

background:rgba(255,255,255,.2);

}

.letter.open p{

display:block;

}

/* ==========================
   FINAL MESSAGE
========================== */

#finalMessage{

display:none;

margin-top:40px;

max-width:700px;

animation:fadeIn 2s;

}

canvas{

position:fixed;

top:0;
left:0;

width:100%;
height:100%;

pointer-events:none;

}

/* ==========================
   ANIMATIONS
========================== */

@keyframes bounce{

0%,100%{

transform:translateY(0);

}

50%{

transform:translateY(-15px);

}

}

@keyframes fadeIn{

from{

opacity:0;

transform:translateY(20px);

}

to{

opacity:1;

transform:translateY(0);

}

}

/* ==========================
   RESPONSIVE
========================== */

@media(max-width:768px){

#homeScreen h1{

font-size:55px;

}

.page h1{

font-size:45px;

}

.polaroid{

width:90%;

}

.video-card{

width:90%;

}

.certificate{

padding:25px;

}

}