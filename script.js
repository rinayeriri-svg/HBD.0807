const gift = document.getElementById("giftBox");
const giftScreen = document.getElementById("giftScreen");
const homeScreen = document.getElementById("homeScreen");

gift.addEventListener("click", () => {

    gift.innerHTML = "✨";

    gift.style.transform = "scale(2)";
    gift.style.opacity = "0";

    setTimeout(() => {

        giftScreen.style.display = "none";

        homeScreen.classList.remove("hidden");

        homeScreen.style.animation = "fadeIn 2s";

    },1000);

});
function toggleLetter(letter){

letter.classList.toggle("open");

}
function celebrate() {
    confetti({
        particleCount: 250,
        spread: 180,
        origin: { y: 0.6 }
    });

    document.getElementById("finalMessage").style.display = "block";
}