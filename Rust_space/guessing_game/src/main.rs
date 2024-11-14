fn main() {
    println!("Guessing number");

    println!(" Please, input your Guess");

    let mut guess = String::new(); // 'let' is a statemet to create variables.
                                   // = means to bind (Enlazar)

    std::io::stdin()
        .read_line(&mut guess)
        .expect("Failed to read the line");
    println!("You guessed : {guess}");
}
