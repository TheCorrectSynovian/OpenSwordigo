/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000518874
 * Mangled: _Z23PVRTTextureFormatGetBPPjj
 * Demangled: PVRTTextureFormatGetBPP(uint,uint)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 15
 *   insn=0x0000000000518874 string=0x0000000000518878 ""
 *   insn=0x000000000051887C string=0x0000000000518880 "("
 *   insn=0x0000000000518880 string=0x0000000000518884 "\t"
 *   insn=0x0000000000518880 string=0x00000000005188A4 "("
 *   insn=0x0000000000518884 string=0x000000000051888C "(y"
 *   insn=0x0000000000518890 string=0x0000000000518894 ""
 *   insn=0x00000000005188A8 string=0x00000000005188AC " "
 *   insn=0x00000000005188AC string=0x00000000005188D0 "!"
 *   insn=0x00000000005188B8 string=0x00000000005188BC "!"
 *   insn=0x00000000005188BC string=0x00000000005188C0 "?"
 *   insn=0x00000000005188C0 string=0x00000000005188C4 "A"
 *   insn=0x00000000005188D0 string=0x00000000005188D4 "?"
 *   insn=0x00000000005188DC string=0x00000000005188E0 "("
 *   insn=0x00000000005188E0 string=0x00000000005188E4 "?"
 *   insn=0x00000000005188E4 string=0x00000000005188E8 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall PVRTTextureFormatGetBPP(int a1, int a2)
{
  int v2; // w8
  __int64 result; // x0

  v2 = a1 - 35840;
  result = 2;
  switch ( v2 )
  {
    case 0:
    case 2:
      return 4;
    case 1:
    case 3:
      return result;
    default:
      if ( a1 != 5121 )
      {
        if ( a1 == 32820 && a2 == 6408 )
          return 16;
        return 0xFFFFFFFFLL;
      }
      result = 32;
      if ( a2 != 6408 && a2 != 32993 )
        return 0xFFFFFFFFLL;
      return result;
  }
}

