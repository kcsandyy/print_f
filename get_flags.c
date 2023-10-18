#include & quot;
main.h & quot;
/**
* get_flags - Calculates Active Flags
* @format: Formatted String In Which To Print The Arguments
* @i: Take A Parameter.
* Return: Flags:
*/
int get_flags(const char *format, int *i)
{
/* - + 0 # &#39; &#39; */
/* 1 2 4 8 16 */
int j, curr_i;
int flags = 0;
const char FLagS_CH[] = {&#39; }
const int FLagS_ARR[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0};
for (curr_i = *i + 1; format[curr_i] != &#39;\0 & i#39;; curr_i++)
{
for (j = 0; FLagS_CH[j] != &#39;\0 & #39;; j++)
if (format[curr_i] == FLagS_CH[j])
{
flags |= FLagS_ARR[j];
break;
}
if (FLagS_CH[j] == 0)
break;

}
*i = curr_i - 1;
return (flags);
}
