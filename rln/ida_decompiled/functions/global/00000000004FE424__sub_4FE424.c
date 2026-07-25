/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FE424
 * Mangled: sub_4FE424
 * Demangled: sub_4FE424
 *
 * Callers: 1
 *   0x00000000004F2CCC  sub_4F2CCC
 *
 * Callees: 0
 *
 * Referenced strings: 16
 *   insn=0x00000000004FE42C string=0x00000000004FE45C ""
 *   insn=0x00000000004FE438 string=0x00000000004FE43C "("
 *   insn=0x00000000004FE43C string=0x00000000004FE440 ""
 *   insn=0x00000000004FE440 string=0x00000000004FE444 ")"
 *   insn=0x00000000004FE444 string=0x00000000004FE448 "@"
 *   insn=0x00000000004FE448 string=0x00000000004FE44C "yi"
 *   insn=0x00000000004FE44C string=0x00000000004FE450 "5"
 *   insn=0x00000000004FE450 string=0x00000000004FE454 "("
 *   insn=0x00000000004FE45C string=0x00000000004FE460 ")"
 *   insn=0x00000000004FE464 string=0x00000000004FE468 "l"
 *   insn=0x00000000004FE468 string=0x00000000004FE46C "@"
 *   insn=0x00000000004FE46C string=0x00000000004FE470 ")"
 *   insn=0x00000000004FE470 string=0x00000000004FE474 "\nii"
 *   insn=0x00000000004FE474 string=0x00000000004FE478 "KY"
 *   insn=0x00000000004FE478 string=0x00000000004FE47C "i)"
 *   insn=0x00000000004FE47C string=0x00000000004FE480 ","
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4FE424(__int64 result, _DWORD *a2)
{
  if ( *a2 == 14 )
  {
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)result + 24LL) + 4LL * (int)a2[2]) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)result
                                                                                                  + 24LL)
                                                                                      + 4LL * (int)a2[2])
                                                                          & 0x7FFFFF
                                                                          | 0x1000000;
    *a2 = 11;
  }
  else if ( *a2 == 13 )
  {
    *a2 = 12;
    a2[2] = (unsigned __int8)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)result + 24LL) + 4LL * (int)a2[2]) >> 6);
  }
  return result;
}

