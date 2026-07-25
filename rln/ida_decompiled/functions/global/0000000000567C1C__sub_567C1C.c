/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000567C1C
 * Mangled: sub_567C1C
 * Demangled: sub_567C1C
 *
 * Callers: 1
 *   0x000000000027C118  Caver::MonsterEntityComponent::HandleDamageImpact(Caver::DamageImpact *)
 *
 * Callees: 1
 *   0x00000000001F5190  .memcmp
 *
 * Referenced strings: 12
 *   insn=0x0000000000567C38 string=0x0000000000567C3C "C"
 *   insn=0x0000000000567C3C string=0x0000000000567C40 "_"
 *   insn=0x0000000000567C40 string=0x0000000000567C44 "S"
 *   insn=0x0000000000567C70 string=0x0000000000567C74 "_"
 *   insn=0x0000000000567C7C string=0x0000000000567C80 "T"
 *   insn=0x0000000000567C84 string=0x0000000000567C88 "w"
 *   insn=0x0000000000567C98 string=0x0000000000567C9C "s"
 *   insn=0x0000000000567CAC string=0x0000000000567CB0 "!"
 *   insn=0x0000000000567CB0 string=0x0000000000567C94 "_"
 *   insn=0x0000000000567CBC string=0x0000000000567CC0 "45"
 *   insn=0x0000000000567CC0 string=0x00000000001F5190 "P'"
 *   insn=0x0000000000567CC4 string=0x0000000000567CC8 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 __fastcall sub_567C1C(__int64 *a1, char *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // x21
  unsigned __int64 v5; // x20
  __int64 v6; // x19
  unsigned __int64 v8; // x22
  unsigned __int64 v9; // x20
  size_t v10; // x23
  char *v11; // x24
  int v12; // w25
  unsigned __int64 v13; // x2
  int v14; // w0

  v4 = *a1;
  v5 = *(_QWORD *)(*a1 - 24);
  if ( a4 )
  {
    v6 = -1;
    if ( a4 <= v5 )
    {
      v8 = v5 - a4;
      if ( a3 <= v5 - a4 )
      {
        v9 = a3 + 1;
        v6 = a3;
        v10 = a4 - 1;
        v11 = a2 + 1;
        v12 = (unsigned __int8)*a2;
        while ( 1 )
        {
          v13 = v9;
          if ( *(unsigned __int8 *)(v4 + v6) == v12 )
          {
            v14 = memcmp((const void *)(v4 + v9), v11, v10);
            v13 = v9;
            if ( !v14 )
              break;
          }
          ++v9;
          ++v6;
          if ( v13 > v8 )
            return -1;
        }
      }
    }
  }
  else if ( a3 > v5 )
  {
    return -1;
  }
  else
  {
    return a3;
  }
  return v6;
}

