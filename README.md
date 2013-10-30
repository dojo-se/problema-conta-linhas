#Dojo 24/10/2013

Problema utilizado: [Contando Linhas de Código](http://dojopuzzles.com/problemas/exibe/contando-linhas-de-codigo/ "DojoPuzzles")

Resumo do problema: 
Desenvolva um utilitário que conte o número de linhas de código efetivo em um arquivo-fonte em Java. Considere uma linha se ela não contiver apenas caracteres em branco ou texto dentro de comentários. Alguns exemplos:


	// This file contains 3 lines of code  
	public interface Dave {  
		/**
 		* count the number of lines in a file
		*/
   		int countLines(File inFile); // not the real signature!
	}

-

	/*****
	 * This is a test program with 5 lines of code
  	 *  \/* no nesting allowed!
	  //*****//***/// Slightly pathological comment ending...
	
	public class Hello {
		public static final void main(String [] args) { // gotta love Java
		// Say hello
			System./*wait*/out./*for*/println/*it*/("Hello/*");
		}

	}


Lembre-se que comentários em Java podem ser ou "//" até o final de uma linha, ou "/*" até encontrar "*/". Podem existir múltiplos "/*...*/" comentário em uma linha. Caracteres em branco incluem tabulações, espações e quebras de linha. Comentários dentro de string Java devem ser ignorados.

Situação final no dojo: falhando em um teste!