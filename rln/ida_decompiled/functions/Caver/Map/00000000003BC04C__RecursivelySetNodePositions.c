/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003BC04C
 * Mangled: _ZN5Caver3Map27RecursivelySetNodePositionsEPNS_7MapNodeE
 * Demangled: Caver::Map::RecursivelySetNodePositions(Caver::MapNode *)
 *
 * Callers: 2
 *   0x00000000001F43E0  Caver::Map::RecursivelySetNodePositions(Caver::MapNode *)
 *   0x00000000003BC04C  Caver::Map::RecursivelySetNodePositions(Caver::MapNode *)
 *
 * Callees: 4
 *   0x00000000001F5730  Caver::Vector2::FromAngle(float)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FDA30  Caver::Vector2::Rounded(void)
 *   0x0000000000200310  std::map<std::string,boost::shared_ptr<Caver::MapNode>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>>>::operator[](std::string const&)
 *
 * Referenced strings: 39
 *   insn=0x00000000003BC06C string=0x00000000003BC070 "X"
 *   insn=0x00000000003BC070 string=0x00000000003BC074 ""
 *   insn=0x00000000003BC080 string=0x00000000003BC084 "{"C"
 *   insn=0x00000000003BC08C string=0x00000000003BC090 "K"
 *   insn=0x00000000003BC08C string=0x00000000003BC1C4 ""
 *   insn=0x00000000003BC0A0 string=0x00000000003BC0A4 ""
 *   insn=0x00000000003BC0A4 string=0x00000000003BC0A8 "|U"
 *   insn=0x00000000003BC0A8 string=0x00000000003BC0AC ";"
 *   insn=0x00000000003BC0AC string=0x00000000003BC198 "a"
 *   insn=0x00000000003BC0B8 string=0x00000000003BC0BC "w"
 *   insn=0x00000000003BC0C0 string=0x00000000003BC0C4 "("
 *   insn=0x00000000003BC0CC string=0x00000000003BC0D0 "\t@"
 *   insn=0x00000000003BC0D8 string=0x00000000003BC0DC ""
 *   insn=0x00000000003BC0E8 string=0x00000000003BC1A4 "{"C"
 *   insn=0x00000000003BC100 string=0x00000000003BC104 "h*@"
 *   insn=0x00000000003BC100 string=0x00000000003BC134 "h"
 *   insn=0x00000000003BC108 string=0x00000000003BC10C "h"
 *   insn=0x00000000003BC110 string=0x00000000003BC114 "`"
 *   insn=0x00000000003BC114 string=0x00000000003BC118 ""
 *   insn=0x00000000003BC120 string=0x00000000003BC124 "@"
 *   insn=0x00000000003BC134 string=0x00000000003BC138 "\t@"
 *   insn=0x00000000003BC13C string=0x00000000003BC140 "\t"
 *   insn=0x00000000003BC148 string=0x00000000003BC158 "i"
 *   insn=0x00000000003BC14C string=0x00000000003BC154 " "
 *   insn=0x00000000003BC15C string=0x00000000003BC160 "t"
 *   insn=0x00000000003BC160 string=0x00000000001F5730 "P'"
 *   insn=0x00000000003BC174 string=0x00000000003BC178 "."
 *   insn=0x00000000003BC178 string=0x00000000001FDA30 "0'"
 *   insn=0x00000000003BC17C string=0x00000000003BC180 " "
 *   insn=0x00000000003BC198 string=0x00000000003BC19C "(@@9"
 *   insn=0x00000000003BC1A4 string=0x00000000003BC1A8 "Z"
 *   insn=0x00000000003BC1A8 string=0x00000000003BC1AC "9c"
 *   insn=0x00000000003BC1AC string=0x00000000003BC1B0 ""
 *   insn=0x00000000003BC1B0 string=0x00000000003BC1B4 ""
 *   insn=0x00000000003BC1B4 string=0x00000000003BC1B8 "}"
 *   insn=0x00000000003BC1B8 string=0x00000000003BC1BC "_"
 *   insn=0x00000000003BC1CC string=0x00000000003BC1D0 "A"
 *   insn=0x00000000003BC1D0 string=0x00000000003BC1F8 "6"
 *   insn=0x00000000003BC1F8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::Map *__fastcall Caver::Map::RecursivelySetNodePositions(Caver::Map *this, Caver::MapNode *a2)
{
  Caver::Map *v3; // x20
  __int64 v4; // x27
  __int64 v5; // x25
  unsigned __int64 v6; // x26
  float32x2_t v7; // d8
  __int64 v8; // x22
  _QWORD *v9; // x23
  __int64 v10; // x8
  int v11; // w8
  Caver::MapNode *v12; // x8
  unsigned __int64 v13; // d0
  float v14; // s0
  int v15; // w8
  float32x2_t v16; // d9
  unsigned __int64 v17; // [xsp+0h] [xbp-80h] BYREF
  float32x2_t v18; // [xsp+8h] [xbp-78h] BYREF
  float32x2_t v19[2]; // [xsp+10h] [xbp-70h] BYREF

  v3 = this;
  v19[1] = *(float32x2_t *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = *((_QWORD *)a2 + 6);
  if ( *((_QWORD *)a2 + 7) != v4 )
  {
    v5 = 0;
    v6 = 0;
    v7.n64_u64[0] = vdup_n_s32(0x42580000u).n64_u64[0];
    do
    {
      if ( !*(_BYTE *)(v4 + v5 + 16) )
      {
        this = (Caver::Map *)std::map<std::string,boost::shared_ptr<Caver::MapNode>>::operator[]();
        v8 = *(_QWORD *)this;
        v9 = (_QWORD *)*((_QWORD *)this + 1);
        if ( !v9
          || v9[1]
          || (this = (Caver::Map *)(*(__int64 (__fastcall **)(_QWORD))(*v9 + 16LL))(*((_QWORD *)this + 1)),
              v10 = v9[2] - 1LL,
              (v9[2] = v10) != 0) )
        {
          if ( v8 )
            goto LABEL_7;
        }
        else
        {
          this = (Caver::Map *)(*(__int64 (__fastcall **)(_QWORD *))(*v9 + 24LL))(v9);
          if ( v8 )
          {
LABEL_7:
            if ( !*(_BYTE *)(v8 + 92) )
            {
              v11 = *(unsigned __int8 *)(v8 + 72);
              *(_BYTE *)(v8 + 92) = 1;
              if ( v11 )
              {
                v12 = (Caver::MapNode *)*((_QWORD *)a2 + 10);
                if ( !v12 )
                  v12 = a2;
                *(_QWORD *)(v8 + 80) = v12;
                v13 = *((_QWORD *)a2 + 1);
              }
              else
              {
                v14 = 0.0;
                v15 = *(_DWORD *)(v4 + v5 + 8) - 2;
                if ( (unsigned int)v15 <= 6 )
                  v14 = flt_591F50[v15];
                v16.n64_u64[0] = *(_QWORD *)((unsigned __int64)a2 + 8);
                Caver::Vector2::FromAngle((__int64 *)&v18, this, v14);
                v17 = vmul_f32(v18, v7).n64_u64[0];
                Caver::Vector2::Rounded((__int64 *)v19, (Caver::Vector2 *)&v17);
                v13 = vadd_f32(v16, v19[0]).n64_u64[0];
              }
              *(_QWORD *)(v8 + 8) = v13;
              this = (Caver::Map *)Caver::Map::RecursivelySetNodePositions(v3, (Caver::MapNode *)v8);
            }
          }
        }
      }
      v4 = *((_QWORD *)a2 + 6);
      ++v6;
      v5 += 24;
    }
    while ( v6 < 0xAAAAAAAAAAAAAAABLL * ((*((_QWORD *)a2 + 7) - v4) >> 3) );
  }
  return this;
}

