/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FD7F0
 * Mangled: sub_4FD7F0
 * Demangled: sub_4FD7F0
 *
 * Callers: 1
 *   0x00000000004FCDB4  sub_4FCDB4
 *
 * Callees: 9
 *   0x00000000001F7660  .ispunct
 *   0x00000000001F8470  .isalpha
 *   0x00000000001FA100  .iscntrl
 *   0x00000000001FC7A0  .isalnum
 *   0x00000000001FC8C0  .isxdigit
 *   0x00000000001FE760  .isupper
 *   0x00000000002005D0  .isspace
 *   0x0000000000202520  .tolower
 *   0x0000000000202C90  .islower
 *
 * Referenced strings: 17
 *   insn=0x00000000004FD804 string=0x00000000004FD808 "F"
 *   insn=0x00000000004FD808 string=0x00000000004FD80C ""
 *   insn=0x00000000004FD810 string=0x00000000004FD814 "("
 *   insn=0x00000000004FD818 string=0x00000000004FD820 "(y"
 *   insn=0x00000000004FD820 string=0x00000000004FD824 ""
 *   insn=0x00000000004FD830 string=0x00000000001F8470 "0'"
 *   insn=0x00000000004FD83C string=0x00000000004FD840 " "
 *   insn=0x00000000004FD844 string=0x00000000004FD848 "."
 *   insn=0x00000000004FD848 string=0x00000000001FA100 "0'"
 *   insn=0x00000000004FD860 string=0x00000000004FD864 ""
 *   insn=0x00000000004FD86C string=0x00000000004FD870 "|"
 *   insn=0x00000000004FD870 string=0x00000000001F7660 "0'"
 *   insn=0x00000000004FD878 string=0x00000000004FD87C "U"
 *   insn=0x00000000004FD87C string=0x00000000004FD880 "\t"
 *   insn=0x00000000004FD894 string=0x00000000001FC7A0 "0'"
 *   insn=0x00000000004FD89C string=0x00000000004FD8A0 ""
 *   insn=0x00000000004FD8A0 string=0x00000000001FC8C0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4FD7F0(int a1, int c)
{
  int v4; // w0
  __int64 result; // x0
  _BOOL4 v6; // w20

  switch ( tolower(c) )
  {
    case 'a':
      v4 = isalpha(a1);
      goto LABEL_12;
    case 'c':
      v4 = iscntrl(a1);
      goto LABEL_12;
    case 'd':
      v6 = (unsigned int)(a1 - 48) < 0xA;
      goto LABEL_13;
    case 'l':
      v4 = islower(a1);
      goto LABEL_12;
    case 'p':
      v4 = ispunct(a1);
      goto LABEL_12;
    case 's':
      v4 = isspace(a1);
      goto LABEL_12;
    case 'u':
      v4 = isupper(a1);
      goto LABEL_12;
    case 'w':
      v4 = isalnum(a1);
      goto LABEL_12;
    case 'x':
      v4 = isxdigit(a1);
LABEL_12:
      v6 = v4;
      goto LABEL_13;
    case 'z':
      v6 = a1 == 0;
LABEL_13:
      if ( islower(c) )
        result = v6;
      else
        result = !v6;
      break;
    default:
      result = c == a1;
      break;
  }
  return result;
}

