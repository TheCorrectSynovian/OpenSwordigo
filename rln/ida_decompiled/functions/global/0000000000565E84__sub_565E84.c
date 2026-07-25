/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000565E84
 * Mangled: sub_565E84
 * Demangled: sub_565E84
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x000000000056918C  sub_56918C
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 29
 *   insn=0x0000000000565E84 string=0x0000000000565E88 "!"
 *   insn=0x0000000000565E94 string=0x0000000000565E98 "?"
 *   insn=0x0000000000565EA8 string=0x0000000000565EAC "I"
 *   insn=0x0000000000565EB0 string=0x000000000059F880 "Unknown error"
 *   insn=0x0000000000565EB4 string=0x0000000000565EB8 "!"
 *   insn=0x0000000000565EDC string=0x0000000000565EE0 "a"
 *   insn=0x0000000000565EE0 string=0x0000000000565EE4 " "
 *   insn=0x0000000000565EEC string=0x000000000059F868 "No associated state"
 *   insn=0x0000000000565EF0 string=0x0000000000565EF4 "!"
 *   insn=0x0000000000565EF4 string=0x0000000000565EF8 "b"
 *   insn=0x0000000000565F10 string=0x000000000059F848 "Promise already satisfied"
 *   insn=0x0000000000565F14 string=0x0000000000565F18 "! !"
 *   insn=0x0000000000565F18 string=0x0000000000565F1C """
 *   insn=0x0000000000565F34 string=0x000000000059F828 "Future already retrieved"
 *   insn=0x0000000000565F38 string=0x0000000000565F3C "!"
 *   insn=0x0000000000565F58 string=0x000000000059F818 "Broken promise"
 *   insn=0x0000000000565F5C string=0x0000000000565F60 "!` "
 *   insn=0x0000000000565F84 string=0x0000000000565F88 "@`"
 *   insn=0x0000000000565F8C string=0x0000000000565F90 "a"
 *   insn=0x0000000000565F94 string=0x0000000000565F98 "Kn"
 *   insn=0x0000000000565FA0 string=0x0000000000565FA4 "!<G"
 *   insn=0x0000000000565FA4 string=0x0000000000565FA8 "A"
 *   insn=0x0000000000565FA8 string=0x0000000000565FAC "a"
 *   insn=0x0000000000565FA8 string=0x0000000000565FD0 "A"
 *   insn=0x0000000000565FAC string=0x0000000000565FB0 """
 *   insn=0x0000000000565FB0 string=0x0000000000565FB4 "b"
 *   insn=0x0000000000565FB8 string=0x0000000000565FBC "?"
 *   insn=0x0000000000565FD0 string=0x0000000000565FD4 "#"
 *   insn=0x0000000000565FD4 string=0x0000000000565FD8 "C"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__usercall sub_565E84@<X0>(int a1@<W1>, _QWORD *a2@<X8>)
{
  _QWORD *result; // x0

  *a2 = &byte_6FD2F8;
  switch ( a1 )
  {
    case 1:
      sub_56918C(a2, "Future already retrieved", 24);
      result = a2;
      break;
    case 2:
      sub_56918C(a2, "Promise already satisfied", 25);
      result = a2;
      break;
    case 3:
      sub_56918C(a2, "No associated state", 19);
      result = a2;
      break;
    case 4:
      sub_56918C(a2, "Broken promise", 14);
      result = a2;
      break;
    default:
      sub_56918C(a2, "Unknown error", 13);
      result = a2;
      break;
  }
  return result;
}

