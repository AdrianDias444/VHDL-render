use logos::Logos;
use std::env;
use std::fs::read_to_string;


#[derive(Logos, Debug, PartialEq)]
#[logos(skip r"[ \t\n\f]+")] // Ignore this regex pattern between tokens
enum Token{
    #[token("and")]
    And,
    #[token("or")]
    Or,
    #[token("not")]
    Not,
    #[token("(")]
    LeftBracket,
    #[token(")")]
    RightBracket,
    #[regex("[a-zA-Z_][a-zA-Z0-9]*")]
    Text,
    #[token("<=")]
    fDefinition,
}


fn main(){
    let args: Vec<String> = env::args().collect();
    if args.len() != 2{
        println!("use: {} <ficheiro.hdl>", args[0]);
        std::process::exit(1);
    }


    let file = read_to_string(&args[1]).unwrap();
    println!("vhdl function: {:?}", file);
    let mut lex = Token::lexer(&file);

    while let Some(result) = lex.next(){
        match result{
            Ok(result) => println!("{:?} {:?}", result, lex.slice()),
            Err(e) => println!("erro: {:?}", e),
        }
    }
}

