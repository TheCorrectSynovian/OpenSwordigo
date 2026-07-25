/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046E074
 * Mangled: _ZN5Caver14SceneGridLayer18GetEntriesInBoundsERKNS_9RectangleEPNS_10FastVectorIPNS_14SceneGridEntryEEE
 * Demangled: Caver::SceneGridLayer::GetEntriesInBounds(Caver::Rectangle const&,Caver::FastVector<Caver::SceneGridEntry *> *)
 *
 * Callers: 1
 *   0x00000000001F5BB0  Caver::SceneGridLayer::GetEntriesInBounds(Caver::Rectangle const&,Caver::FastVector<Caver::SceneGridEntry *> *)
 *
 * Callees: 4
 *   0x00000000001F59D0  Caver::Rectangle::IntersectsWithRect(Caver::Rectangle const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8770  Caver::SceneGridLayer::GridRectForAABB(Caver::Rectangle const&)
 *   0x00000000001FF470  Caver::FastVector<Caver::SceneGridEntry *>::Resize(int)
 *
 * Referenced strings: 40
 *   insn=0x000000000046E090 string=0x000000000046E094 "H"
 *   insn=0x000000000046E098 string=0x000000000046E09C ""
 *   insn=0x000000000046E0B0 string=0x000000000046E0B4 "h\t"
 *   insn=0x000000000046E0B8 string=0x000000000046E0BC "(\t"
 *   insn=0x000000000046E0C8 string=0x000000000046E0CC ""
 *   insn=0x000000000046E0C8 string=0x00000000001F8770 "0'"
 *   insn=0x000000000046E0CC string=0x000000000046E0D0 "\t"
 *   insn=0x000000000046E0E0 string=0x000000000046E0E4 "<"
 *   insn=0x000000000046E0E8 string=0x000000000046E0EC "|"
 *   insn=0x000000000046E100 string=0x000000000046E104 ","
 *   insn=0x000000000046E110 string=0x000000000046E114 "\nY\n8"
 *   insn=0x000000000046E114 string=0x000000000046E118 "8"
 *   insn=0x000000000046E118 string=0x000000000046E11C ""
 *   insn=0x000000000046E124 string=0x000000000046E128 "J}@"
 *   insn=0x000000000046E128 string=0x000000000046E12C "<"
 *   insn=0x000000000046E134 string=0x000000000046E138 "I"
 *   insn=0x000000000046E13C string=0x000000000046E140 "("
 *   insn=0x000000000046E140 string=0x000000000046E144 "("
 *   insn=0x000000000046E144 string=0x000000000046E148 "W"
 *   insn=0x000000000046E150 string=0x000000000046E1A8 ""
 *   insn=0x000000000046E160 string=0x000000000046E164 ""
 *   insn=0x000000000046E164 string=0x00000000001F59D0 "P'"
 *   insn=0x000000000046E168 string=0x000000000046E16C "h&@)"
 *   insn=0x000000000046E170 string=0x000000000046E174 ""
 *   insn=0x000000000046E174 string=0x000000000046E178 "(y"
 *   insn=0x000000000046E174 string=0x000000000046E194 "i"
 *   insn=0x000000000046E17C string=0x000000000046E180 "I"
 *   insn=0x000000000046E18C string=0x000000000046E190 "h"
 *   insn=0x000000000046E194 string=0x000000000046E198 "\n"
 *   insn=0x000000000046E198 string=0x000000000046E19C "7"
 *   insn=0x000000000046E19C string=0x000000000046E1A0 "j"
 *   insn=0x000000000046E1A8 string=0x000000000046E1AC "9"
 *   insn=0x000000000046E1AC string=0x000000000046E1B0 "?"
 *   insn=0x000000000046E1B0 string=0x000000000046E1B4 "+"
 *   insn=0x000000000046E1C0 string=0x000000000046E1C4 "+"
 *   insn=0x000000000046E1D0 string=0x000000000046E1D4 ""
 *   insn=0x000000000046E1E0 string=0x000000000046E1E4 ""
 *   insn=0x000000000046E1EC string=0x000000000046E1F0 "!"
 *   insn=0x000000000046E1F0 string=0x000000000046E214 "/ "
 *   insn=0x000000000046E214 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SceneGridLayer::GetEntriesInBounds(__int64 this, Caver::Rectangle *a2, int *a3)
{
  __int64 v3; // x20
  int v6; // w22
  __int64 v7; // x9
  int v8; // w10
  __int64 v9; // x24
  int v10; // w8
  int *v11; // x24
  int v12; // t1
  __int64 v13; // x28
  int v14; // w25
  __int64 v15; // x23
  int v16; // w8
  bool v17; // cc
  int v18; // [xsp+14h] [xbp-8Ch]
  __int64 v19; // [xsp+18h] [xbp-88h]
  int v20; // [xsp+24h] [xbp-7Ch]
  __int64 v21; // [xsp+28h] [xbp-78h]
  __int128 v22; // [xsp+30h] [xbp-70h] BYREF
  __int64 v23; // [xsp+48h] [xbp-58h]

  v3 = this;
  v23 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(_DWORD *)(this + 40) )
  {
    if ( *(_DWORD *)(this + 44) )
    {
      this = Caver::SceneGridLayer::GridRectForAABB((Caver::SceneGridLayer *)this, a2);
      v21 = this << 16 >> 48;
      v19 = this >> 48;
      if ( (int)((unsigned __int64)this >> 16) >> 16 <= this >> 48 )
      {
        v18 = (__int16)this;
        v20 = (int)this >> 16;
        do
        {
          v6 = v18;
          if ( v18 <= v20 )
          {
            do
            {
              v7 = *(_QWORD *)(v3 + 48);
              v8 = v6 + *(_DWORD *)(v3 + 40) * v21;
              v9 = v7 + 16LL * v8;
              v12 = *(_DWORD *)(v9 + 8);
              v11 = (int *)(v9 + 8);
              v10 = v12;
              if ( v12 >= 1 )
              {
                v13 = v7 + 16LL * v8;
                v14 = 0;
                do
                {
                  v15 = *(_QWORD *)(*(_QWORD *)v13 + 8LL * (v14 + *(_DWORD *)(v13 + 12) - v10));
                  if ( !*(_BYTE *)(v15 + 16) )
                  {
                    v22 = *(_OWORD *)(v15 + 20);
                    this = Caver::Rectangle::IntersectsWithRect((Caver::Rectangle *)&v22, a2);
                    if ( (this & 1) != 0 )
                    {
                      v16 = *a3;
                      if ( *a3 >= a3[1] )
                      {
                        this = Caver::FastVector<Caver::SceneGridEntry *>::Resize();
                        v16 = *a3;
                      }
                      *(_QWORD *)(*((_QWORD *)a3 + 1) + 8LL * v16) = v15;
                      *a3 = v16 + 1;
                      *(_BYTE *)(v15 + 16) = 1;
                    }
                  }
                  v10 = *v11;
                  ++v14;
                }
                while ( v14 < *v11 );
              }
              v17 = v6++ < v20;
            }
            while ( v17 );
          }
          v17 = (int)v21 < (int)v19;
          LODWORD(v21) = v21 + 1;
        }
        while ( v17 );
      }
    }
  }
  return this;
}

