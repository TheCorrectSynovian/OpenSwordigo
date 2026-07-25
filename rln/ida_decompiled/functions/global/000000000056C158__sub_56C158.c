/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056C158
 * Mangled: sub_56C158
 * Demangled: sub_56C158
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 6
 *   insn=0x000000000056C160 string=0x000000000056C164 "C"
 *   insn=0x000000000056C164 string=0x000000000056C16C "c"
 *   insn=0x000000000056C16C string=0x000000000056C170 "_"
 *   insn=0x000000000056C170 string=0x000000000056C174 "@"
 *   insn=0x000000000056C188 string=0x000000000056C18C "_"
 *   insn=0x000000000056C18C string=0x000000000056C190 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_56C158(__int64 *a1, int a2, unsigned __int64 a3)
{
  __int64 v3; // x4
  __int64 result; // x0
  __int64 v5; // x3
  unsigned __int64 v6; // x3

  v3 = *a1;
  result = -1;
  v5 = *(_QWORD *)(v3 - 24);
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( a3 > v6 )
      result = v6;
    else
      result = a3;
    while ( *(_DWORD *)(v3 + 4 * result) == a2 )
    {
      if ( !result )
        return -1;
      --result;
    }
  }
  return result;
}

