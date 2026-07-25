/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053BD84
 * Mangled: sub_53BD84
 * Demangled: sub_53BD84
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000565808  sub_565808
 *
 * Referenced strings: 7
 *   insn=0x000000000053BD88 string=0x000000000053BD8C "@"
 *   insn=0x000000000053BD90 string=0x000000000053BD94 "A"
 *   insn=0x000000000053BDA4 string=0x000000000059E3D0 "locale::_S_normalize_category category not found"
 *   insn=0x000000000053BDD0 string=0x000000000053BDD8 " H`8a"
 *   insn=0x000000000053BDD8 string=0x000000000053BDDC "a"
 *   insn=0x000000000053BDDC string=0x000000000053BDE0 " "
 *   insn=0x000000000053BDE4 string=0x000000000053BDF0 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_53BD84(__int64 result)
{
  unsigned int v1; // w0

  if ( (_DWORD)result )
  {
    if ( (result & 0x3F) == 0 )
    {
      v1 = result - 1;
      if ( v1 > 5 )
LABEL_4:
        sub_565808("locale::_S_normalize_category category not found");
LABEL_9:
      switch ( v1 )
      {
        case 0u:
          return 2;
        case 1u:
          return 8;
        case 2u:
          return 4;
        case 3u:
          return 16;
        case 4u:
          return 32;
        case 5u:
          return 63;
        default:
          goto LABEL_4;
      }
    }
    if ( (result & 0xFFFFFFC0) != 0 )
    {
      v1 = result - 1;
      goto LABEL_9;
    }
  }
  return result;
}

