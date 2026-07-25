/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000581DA4
 * Mangled: sub_581DA4
 * Demangled: sub_581DA4
 *
 * Callers: 4
 *   0x0000000000582140  sub_582140
 *   0x00000000005822B0  sub_5822B0
 *   0x0000000000582768  sub_582768
 *   0x00000000005828C8  sub_5828C8
 *
 * Callees: 1
 *   0x00000000001FE620  .abort
 *
 * Referenced strings: 8
 *   insn=0x0000000000581DBC string=0x0000000000581DC0 "h"
 *   insn=0x0000000000581DC0 string=0x0000000000581DEC ""
 *   insn=0x0000000000581DC4 string=0x0000000000581DCC " H`8a"
 *   insn=0x0000000000581DC4 string=0x00000000005A1130 ""
 *   insn=0x0000000000581DCC string=0x0000000000581DD0 "a"
 *   insn=0x0000000000581DD0 string=0x0000000000581DD4 " "
 *   insn=0x0000000000581DD0 string=0x0000000000581DDC "@"
 *   insn=0x0000000000581DDC string=0x0000000000581DE0 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_581DA4(unsigned __int8 a1)
{
  __int64 result; // x0

  if ( a1 == 255 )
    return 0;
  switch ( a1 & 7 )
  {
    case 0:
    case 4:
      result = 8;
      break;
    case 2:
      result = 2;
      break;
    case 3:
      result = 4;
      break;
    default:
      abort();
      return result;
  }
  return result;
}

