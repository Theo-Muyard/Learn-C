# Chapter 2

> [!TIP]
> Tip #3: Practice makes perfect, so get coding!.

## French translation

| Exercise | Subject |
| --- | --- |
| 3.01 | Notre recherche dichotomique effectue deux comparaisons à l'intérieur de la boucle, alors qu'une seule suffirait (à condition d'en mettre d'autres à l'exterieur) Ecrivez une version ne comportant qu'une seule comparaison dans la boucle. |
| 3.02 | Ecrivez une fonction `echap(s,t)` qui copie la chaîne `t` dans `s` en convertissant au passage les caractères d'échappement visibles comme `\n`et `\t`. Utilisez un `switch`? Ecrivez aussi une fonction qui fait le travail inverse, c'est à dire qui convertit les séquences d'échappement en leurs caractères équivalents. |
| 3.03 | Ecrivez une fonction `developper(s1, s2)` qui lorsqu'elle rencontre des abréviations comme `a-z` dans la chaîne `s1`, les écrits sous leur forme developpée `avc...xyz` dans s2. La fonction devra traiter des lettres majuscules ou minuscules et des chiffres. Prévoyez des cas comme `a-b-c`, `a-z0-9` et `a-z` et faites en sortes que les - qui figurent au début ou à la fin soient copiés tels quels. |
| 3.04 | Dans un système de représentation des nombres par complément à deux, notre version de `itoa` ne peut pas traiter le plus grand nombre négatif, c'est à dire la valeur de `n` égale à -(2<sup>taille du mot-1</sup>). Pourquoi? Modifiez `itoa` de façon à ce qu'elle traite ce cas correctement, quelle que soit la machine utilisée. |
| 3.05 | Ecrivez la fonction `itob(n,s,b)` qui convertit l'entier `n` en sa représentation dans la base `b` et place le résultat dans la chaîne `s`. En particulier, `itob(n,s,16)` écrit `n` sous sa forme hexadécimale. |
| 3.05 | Ecrivez une version de `itoa` qui prend un troisième argument indiquant la largeur minimum de la chaîne convertie; il faudra le cas échéant complété `s` en ajoutant des espaces à gauche du nombre pour atteindre la largeur minimum. |

## English translation

| Exercise | Subject |
| --- | --- |
| 3.01 | Our dichotomous search performs two comparisons within the loop, when only one would suffice (provided that others are placed outside). Write a version that includes only one comparison within the loop. |
| 3.02 | Write a function `escape(s,t)` that copies the string `t` into `s`, converting visible escape characters such as `\n` and `\t` as it goes. Use a `switch`? Also write a function that does the opposite, i.e., converts escape sequences to their equivalent characters. |
| 3.03 | Write a function `expand(s1, s2)` that, when it encounters abbreviations such as `a-z` in the string `s1`, writes them in their expanded form `avc...xyz` in s2. The function should handle uppercase and lowercase letters and numbers. Allow for cases such as `a-b-c`, `a-z0-9`, and `a-z`, and make sure that any hyphens at the beginning or end are copied as is. |
| 3.04 | In a two's complement number representation system, our version of `itoa` cannot handle the largest negative number, i.e., the value of `n` equal to -(2<sup>word size-1</sup>). Why? Modify `itoa` so that it handles this case correctly, regardless of the machine used. |
| 3.05 | Write the function `itob(n,s,b)` that converts the integer `n` to its representation in base `b` and places the result in the string `s`. In particular, `itob(n,s,16)` writes `n` in hexadecimal form. |
| 3.05 | Write a version of `itoa` that takes a third argument indicating the minimum width of the converted string; if necessary, `s` must be padded with spaces to the left of the number to reach the minimum width. |