/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046E218
 * Mangled: _ZN5Caver14SceneGridLayer13GetAllEntriesEPNS_10FastVectorIPNS_14SceneGridEntryEEE
 * Demangled: Caver::SceneGridLayer::GetAllEntries(Caver::FastVector<Caver::SceneGridEntry *> *)
 *
 * Callers: 1
 *   0x00000000001FCAF0  Caver::SceneGridLayer::GetAllEntries(Caver::FastVector<Caver::SceneGridEntry *> *)
 *
 * Callees: 1
 *   0x00000000001FF470  Caver::FastVector<Caver::SceneGridEntry *>::Resize(int)
 *
 * Referenced strings: 32
 *   insn=0x000000000046E238 string=0x000000000046E23C "h.@"
 *   insn=0x000000000046E248 string=0x000000000046E24C "h*@"
 *   insn=0x000000000046E250 string=0x000000000046E254 "W"
 *   insn=0x000000000046E25C string=0x000000000046E260 "K"
 *   insn=0x000000000046E268 string=0x000000000046E26C "i"
 *   insn=0x000000000046E26C string=0x000000000046E270 "\na\n9"
 *   insn=0x000000000046E270 string=0x000000000046E274 "9"
 *   insn=0x000000000046E274 string=0x000000000046E278 "("
 *   insn=0x000000000046E280 string=0x000000000046E284 "J}@"
 *   insn=0x000000000046E280 string=0x000000000046E2F8 "h*@"
 *   insn=0x000000000046E284 string=0x000000000046E288 ";"
 *   insn=0x000000000046E28C string=0x000000000046E290 "|3"
 *   insn=0x000000000046E294 string=0x000000000046E298 "j"
 *   insn=0x000000000046E298 string=0x000000000046E29C ")"
 *   insn=0x000000000046E29C string=0x000000000046E2A0 "I"
 *   insn=0x000000000046E2A0 string=0x000000000046E2A4 "U"
 *   insn=0x000000000046E2A8 string=0x000000000046E2AC "\t"
 *   insn=0x000000000046E2AC string=0x000000000046E2EC "Z"
 *   insn=0x000000000046E2B0 string=0x000000000046E2B4 "?"
 *   insn=0x000000000046E2B4 string=0x000000000046E2B8 ""
 *   insn=0x000000000046E2B8 string=0x000000000046E2BC "Hy"
 *   insn=0x000000000046E2C8 string=0x000000000046E2CC "iD"
 *   insn=0x000000000046E2D0 string=0x000000000046E2D4 "("
 *   insn=0x000000000046E2D8 string=0x000000000046E2DC "+"
 *   insn=0x000000000046E2DC string=0x000000000046E2E0 "U"
 *   insn=0x000000000046E2EC string=0x000000000046E2F0 "_"
 *   insn=0x000000000046E2F0 string=0x000000000046E2F4 ""
 *   insn=0x000000000046E300 string=0x000000000046E304 "+"
 *   insn=0x000000000046E308 string=0x000000000046E30C "i.@"
 *   insn=0x000000000046E30C string=0x000000000046E310 "J"
 *   insn=0x000000000046E310 string=0x000000000046E314 "_"
 *   insn=0x000000000046E318 string=0x000000000046E31C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SceneGridLayer::GetAllEntries(__int64 result, int *a2)
{
  __int64 v2; // x19
  int v4; // w8
  int i; // w24
  __int64 v6; // x9
  int v7; // w10
  __int64 v8; // x25
  int v9; // w8
  int *v10; // x25
  int v11; // t1
  __int64 v12; // x27
  int v13; // w26
  __int64 v14; // x21
  int v15; // w9
  int v16; // [xsp+Ch] [xbp-54h]

  v2 = result;
  if ( *(int *)(result + 44) >= 1 )
  {
    v4 = *(_DWORD *)(result + 40);
    v16 = 0;
    do
    {
      if ( v4 >= 1 )
      {
        for ( i = 0; i < v4; ++i )
        {
          v6 = *(_QWORD *)(v2 + 48);
          v7 = i + v4 * v16;
          v8 = v6 + 16LL * v7;
          v11 = *(_DWORD *)(v8 + 8);
          v10 = (int *)(v8 + 8);
          v9 = v11;
          if ( v11 >= 1 )
          {
            v12 = v6 + 16LL * v7;
            v13 = 0;
            do
            {
              v14 = *(_QWORD *)(*(_QWORD *)v12 + 8LL * (v13 + *(_DWORD *)(v12 + 12) - v9));
              if ( !*(_BYTE *)(v14 + 16) )
              {
                v15 = *a2;
                if ( *a2 >= a2[1] )
                {
                  result = Caver::FastVector<Caver::SceneGridEntry *>::Resize();
                  v15 = *a2;
                  v9 = *v10;
                }
                *(_QWORD *)(*((_QWORD *)a2 + 1) + 8LL * v15) = v14;
                *a2 = v15 + 1;
                *(_BYTE *)(v14 + 16) = 1;
              }
              ++v13;
            }
            while ( v13 < v9 );
          }
          v4 = *(_DWORD *)(v2 + 40);
        }
      }
      ++v16;
    }
    while ( v16 < *(_DWORD *)(v2 + 44) );
  }
  return result;
}

