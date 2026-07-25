/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C0134
 * Mangled: _ZN5Caver5Shape16ShapeWithPolygonERKNS_7PolygonE
 * Demangled: Caver::Shape::ShapeWithPolygon(Caver::Polygon const&)
 *
 * Callers: 1
 *   0x00000000001F3790  Caver::Shape::ShapeWithPolygon(Caver::Polygon const&)
 *
 * Callees: 9
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FC9A0  boost::detail::shared_count::shared_count<Caver::Polygon>(Caver::Polygon *)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000002C0418  Caver::CollisionShapeComponent::setOnCollide(Caver::Program const&)
 *   0x0000000000565294  sub_565294
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 62
 *   insn=0x00000000002C0148 string=0x00000000002C014C "V"
 *   insn=0x00000000002C0164 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002C01A0 string=0x00000000002C01A8 "+"
 *   insn=0x00000000002C01B8 string=0x00000000002C01BC "!"
 *   insn=0x00000000002C01BC string=0x00000000002C01C0 "k"
 *   insn=0x00000000002C01C0 string=0x00000000002C01C4 "l"
 *   insn=0x00000000002C01D0 string=0x00000000002C01D4 ""\t"
 *   insn=0x00000000002C01D4 string=0x00000000002C01D8 "L"
 *   insn=0x00000000002C01E4 string=0x00000000002C01E8 "h"
 *   insn=0x00000000002C01E8 string=0x00000000002C01EC "("
 *   insn=0x00000000002C01EC string=0x00000000002C01F0 "\t!"
 *   insn=0x00000000002C01FC string=0x00000000002C0200 " !"
 *   insn=0x00000000002C0210 string=0x00000000001FC9A0 "0'"
 *   insn=0x00000000002C0230 string=0x00000000002C0234 ")"
 *   insn=0x00000000002C0238 string=0x00000000002C023C "j"
 *   insn=0x00000000002C023C string=0x00000000002C0240 "h"
 *   insn=0x00000000002C0240 string=0x00000000002C0244 "!"
 *   insn=0x00000000002C0248 string=0x00000000002C024C "\t@"
 *   insn=0x00000000002C0258 string=0x00000000002C025C ""
 *   insn=0x00000000002C0260 string=0x00000000002C0264 "!"
 *   insn=0x00000000002C0268 string=0x00000000002C026C "@"
 *   insn=0x00000000002C027C string=0x00000000002C0280 "i"
 *   insn=0x00000000002C0280 string=0x00000000002C0284 "h"
 *   insn=0x00000000002C0288 string=0x00000000002C028C "3"
 *   insn=0x00000000002C028C string=0x00000000002C0290 "h"
 *   insn=0x00000000002C0290 string=0x00000000002C0294 ""
 *   insn=0x00000000002C0294 string=0x00000000002C0298 "h"
 *   insn=0x00000000002C029C string=0x00000000002C02A0 "h"
 *   insn=0x00000000002C02A4 string=0x00000000002C02A8 "\t@"
 *   insn=0x00000000002C02AC string=0x00000000002C02B0 "h\n@"
 *   insn=0x00000000002C02B0 string=0x00000000002C02B4 ""
 *   insn=0x00000000002C02B4 string=0x00000000002C02B8 "h\n"
 *   insn=0x00000000002C02BC string=0x00000000002C02C0 "h"
 *   insn=0x00000000002C02C4 string=0x00000000002C02C8 "@"
 *   insn=0x00000000002C02D8 string=0x00000000002C02DC "A"
 *   insn=0x00000000002C02FC string=0x00000000002C0300 "Q"
 *   insn=0x00000000002C0300 string=0x00000000002C0304 "0"
 *   insn=0x00000000002C0304 string=0x00000000002C0308 "1"
 *   insn=0x00000000002C0314 string=0x00000000002C0318 "."
 *   insn=0x00000000002C0318 string=0x00000000002C031C "Q"
 *   insn=0x00000000002C031C string=0x00000000002C0320 "2"
 *   insn=0x00000000002C0324 string=0x00000000002C0328 "_"
 *   insn=0x00000000002C0328 string=0x00000000002C032C "O"
 *   insn=0x00000000002C0350 string=0x00000000002C0354 "."
 *   insn=0x00000000002C035C string=0x00000000002C0360 "0"
 *   insn=0x00000000002C0360 string=0x00000000002C0364 "-"
 *   insn=0x00000000002C0364 string=0x00000000002C0368 "O"
 *   insn=0x00000000002C0368 string=0x00000000002C036C "J"
 *   insn=0x00000000002C0370 string=0x00000000002C0374 "@"
 *   insn=0x00000000002C0374 string=0x00000000002C0378 "B"
 *   insn=0x00000000002C0378 string=0x00000000002C037C "1""
 *   insn=0x00000000002C0384 string=0x00000000002C0388 "a"
 *   insn=0x00000000002C0390 string=0x00000000002C0394 "!"
 *   insn=0x00000000002C03A4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002C03B0 string=0x00000000002C03B4 "4"
 *   insn=0x00000000002C03B8 string=0x00000000002C03BC ""
 *   insn=0x00000000002C03C8 string=0x00000000002C03CC "\t@"
 *   insn=0x00000000002C03D8 string=0x00000000002C03DC ""
 *   insn=0x00000000002C03E8 string=0x00000000002C03EC "@"
 *   insn=0x00000000002C03F8 string=0x00000000002C03FC "2"
 *   insn=0x00000000002C040C string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002C0410 string=0x00000000002C0414 ","
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall Caver::Shape::ShapeWithPolygon(Caver::Shape *this@<X0>, __int64 a2@<X8>)
{
  __int64 v5; // x20
  char *v6; // x8
  char *v7; // x10
  unsigned __int64 v8; // x0
  unsigned __int64 v9; // x23
  unsigned __int64 v10; // x9
  unsigned __int64 v11; // x11
  unsigned __int64 v12; // x12
  _QWORD *v13; // x13
  __int64 v14; // t1
  __int64 v15; // x9
  __int64 v16; // x8
  __int64 v17; // x8
  __int64 v18; // x8
  unsigned __int64 v19; // x13
  unsigned __int64 v20; // x16
  unsigned __int64 v21; // x17
  unsigned __int64 v22; // x16
  bool v23; // cf
  unsigned __int64 v24; // x17
  unsigned __int64 v25; // x18
  char v26; // w13
  __int64 v27; // x15
  _OWORD *v28; // x16
  char *v29; // x15
  __int128 *v30; // x10
  __int64 v31; // x17
  __int128 v32; // q0
  __int128 v33; // q1
  __int128 v34; // q2
  __int128 v35; // q3
  _QWORD *v36; // [xsp+10h] [xbp-40h]

  _ReadStatusReg(TPIDR_EL0);
  v5 = operator new(0x28u);
  *(_DWORD *)v5 = *(_DWORD *)this;
  v7 = (char *)*((_QWORD *)this + 1);
  v6 = (char *)*((_QWORD *)this + 2);
  *(_QWORD *)(v5 + 8) = 0;
  *(_QWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 24) = 0;
  v8 = v6 - v7;
  v9 = (v6 - v7) >> 3;
  if ( v6 == v7 )
  {
    v10 = 0;
  }
  else
  {
    if ( v9 >> 61 )
      sub_565294();
    v8 = operator new(v8);
    v7 = (char *)*((_QWORD *)this + 1);
    v6 = (char *)*((_QWORD *)this + 2);
    v10 = v8;
  }
  *(_QWORD *)(v5 + 8) = v10;
  *(_QWORD *)(v5 + 16) = v8;
  *(_QWORD *)(v5 + 24) = v10 + 8 * v9;
  if ( v6 != v7 )
  {
    v11 = v6 - 8 - v7;
    v12 = (v11 >> 3) + 1;
    v13 = (_QWORD *)v10;
    if ( v12 >= 8 )
    {
      v19 = (v6 - v7 - 8) & 0xFFFFFFFFFFFFFFF8LL;
      v20 = v10 + v19;
      v21 = (unsigned __int64)&v7[v19 + 4];
      v19 += 8LL;
      v22 = v20 + 4;
      v23 = v8 >= v21;
      v24 = (unsigned __int64)&v7[v19];
      v25 = v10 + v19;
      v26 = !v23;
      if ( ((unsigned __int8)v26 & ((unsigned __int64)v7 < v22)) != 0 )
      {
        v13 = (_QWORD *)v10;
      }
      else
      {
        v13 = (_QWORD *)v10;
        if ( v10 + 4 >= v24 || (unsigned __int64)(v7 + 4) >= v25 )
        {
          v27 = 8 * (v12 & 0x3FFFFFFFFFFFFFF8LL);
          v28 = (_OWORD *)(v10 + 32);
          v13 = (_QWORD *)(v10 + v27);
          v29 = &v7[v27];
          v30 = (__int128 *)(v7 + 32);
          v31 = v12 & 0x3FFFFFFFFFFFFFF8LL;
          do
          {
            v32 = *(v30 - 2);
            v33 = *(v30 - 1);
            v34 = *v30;
            v35 = v30[1];
            v30 += 4;
            v31 -= 8;
            *(v28 - 2) = v32;
            *(v28 - 1) = v33;
            *v28 = v34;
            v28[1] = v35;
            v28 += 4;
          }
          while ( v31 );
          v7 = v29;
          if ( v12 == (v12 & 0x3FFFFFFFFFFFFFF8LL) )
            goto LABEL_8;
        }
      }
    }
    do
    {
      v14 = *(_QWORD *)v7;
      v7 += 8;
      *v13++ = v14;
    }
    while ( v6 != v7 );
LABEL_8:
    v10 += (v11 & 0xFFFFFFFFFFFFFFF8LL) + 8;
  }
  *(_QWORD *)(v5 + 16) = v10;
  *(_WORD *)(v5 + 32) = *((_WORD *)this + 16);
  boost::detail::shared_count::shared_count<Caver::Polygon>();
  boost::detail::sp_enable_shared_from_this();
  if ( v36 )
  {
    v15 = v36[1] + 1LL;
    v36[1] = v15;
    *(_DWORD *)a2 = 3;
    *(_QWORD *)(a2 + 8) = v5;
    *(_QWORD *)(a2 + 16) = v36;
    if ( !v15 )
    {
      (*(void (__fastcall **)())(*v36 + 16LL))();
      v16 = v36[2] - 1LL;
      v36[2] = v16;
      if ( !v16 )
        (*(void (__fastcall **)())(*v36 + 24LL))();
    }
  }
  else
  {
    *(_DWORD *)a2 = 3;
    *(_QWORD *)(a2 + 8) = v5;
    *(_QWORD *)(a2 + 16) = 0;
  }
  if ( v36 )
  {
    v17 = v36[1] - 1LL;
    v36[1] = v17;
    if ( !v17 )
    {
      (*(void (__fastcall **)())(*v36 + 16LL))();
      v18 = v36[2] - 1LL;
      v36[2] = v18;
      if ( !v18 )
        (*(void (__fastcall **)())(*v36 + 24LL))();
    }
  }
}

