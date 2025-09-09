# Chapter 2

> [!TIP]
> Tip #2: Always try it yourself before asking for help.

## French translation

| Exercise | Subject |
| --- | --- |
| 2.01 | Ecrivez un programme qui détermine les valeurs limites des variables de type `char, int & long`, dans les cas `signed` et `unsigned`, vous afficherez les valeurs que donnent les fichiers d'en-tête standart, puis vous les calculerez directement. |
| 2.02 | Ecrivez une boucle équivalente à la boucle `for` ci-dessus sans utiliser `&&` ni `\|\|`. |
| 2.03 | Ecrivez la fonctin `htoi(s)`, qui convertit une chaîne de chiffres hexadécimaux (y compris un eventuel 0x ou 0X) en sa valeur entière. Les chiffres autorisés sont 0 à 9, a à f, et A à F. |
| 2.04 | Ecrivez une autre version de `tasser(s1,s2)` qui supprime tous les caractères de s1 qui figurent aussi dans s2. |
| 2.05 | Ecrivez la fonction `ou(s1,s2)` qui retourne la première position de la chaine s1 qui contient un caractère quelconque de la chaîne s2. |
| 2.06 | Ecrivez une fonction `fixer_bits(x,p,n,y)` qui retourne la valeur obtenue en remplaçant les `n` bits de `x` commençant à la position `p` par les `n` bits de droite de `y`, sans toucher aux autres. |
| 2.07 | Ecrivez une fonction `inverser(x,p,n)` qui retourne la valeur obtenue en inversant les `n` bits de `x` commençant à la position `p` (0 -> 1 et vice-versa), sans toucher aux autres. |
| 2.08 | Ecrivez une fonction `rotdroite(x,n)` qui retourne la valeur obtenue en faisant subir à `x` une rotation de `n` bits vers la droite. |
| 2.09 | Dans le système de calcul en complément à deux, `x &= (x - 1)` efface le bit à un le plus à droite de `x`. Pourquoi? Servez-vous de cette remarque pour écrire une version plus rapide de `compter_bits`. |
| 2.10 | Réécrivez la fonction `min`, qui convertit les majuscules en miniscules, à l'aide d'une expression conditionnelle au lieu d'un `if-else`. |

## English translation

| Exercise | Subject |
| --- | --- |
| 2.01 | Write a program that determines the limit values of variables of type `char, int & long`, in the cases `signed` and `unsigned`. Display the values given in the standard header files, then calculate them directly. |
| 2.02 | Write a loop equivalent to the `for` loop above without using `&&` or `\|\|`. |
| 2.03 | Write the function `htoi(s)`, which converts a string of hexadecimal digits (including any 0x or 0X) to its integer value. The allowed digits are 0 to 9, a to f, and A to F. |
| 2.04 | Write another version of `tasser(s1,s2)` that removes all characters from s1 that also appear in s2. |
| 2.05 | Write the function `ou(s1,s2)` that returns the first position in the string s1 that contains any character from the string s2. |
| 2.06 | Write a function `fix_bits(x,p,n,y)` that returns the value obtained by replacing the `n` bits of `x` starting at position `p` with the `n` bits on the right of `y`, without touching the others. |
| 2.07 | Write a function `reverse(x,p,n)` that returns the value obtained by inverting the `n` bits of `x` starting at position `p` (0 -> 1 and vice versa), without touching the others. |
| 2.08 | Write a function `rot_right(x,n)` that returns the value obtained by rotating `x` `n` bits to the right. | 
| 2.09 | In the two's complement calculation system, `x &= (x - 1)` clears the rightmost bit of `x`. Why? Use this observation to write a faster version of `count_bits`. |
| 2.10 | Rewrite the `min` function, which converts uppercase letters to lowercase, using a conditional expression instead of an `if-else` statement. |