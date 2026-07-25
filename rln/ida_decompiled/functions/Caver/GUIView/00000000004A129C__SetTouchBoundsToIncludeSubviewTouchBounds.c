/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A129C
 * Mangled: _ZN5Caver7GUIView41SetTouchBoundsToIncludeSubviewTouchBoundsEv
 * Demangled: Caver::GUIView::SetTouchBoundsToIncludeSubviewTouchBounds(void)
 *
 * Callers: 1
 *   0x0000000000202DC0  Caver::GUIView::SetTouchBoundsToIncludeSubviewTouchBounds(void)
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6E00  Caver::Rectangle::ExpandToincludeRectangle(Caver::Rectangle const&)
 *
 * Referenced strings: 28
 *   insn=0x00000000004A12B8 string=0x00000000004A12BC "T"
 *   insn=0x00000000004A12CC string=0x00000000004A12D0 "`B"
 *   insn=0x00000000004A12E0 string=0x00000000004A12E4 ""
 *   insn=0x00000000004A12E4 string=0x00000000004A12E8 "5G"
 *   insn=0x00000000004A12E4 string=0x0000000000583734 "o"
 *   insn=0x00000000004A12E8 string=0x00000000004A12EC "wb"
 *   insn=0x00000000004A12F4 string=0x00000000004A12F8 "("
 *   insn=0x00000000004A12FC string=0x00000000004A1300 "a"
 *   insn=0x00000000004A1300 string=0x00000000004A1304 "@"
 *   insn=0x00000000004A1304 string=0x00000000004A1308 "HP"
 *   insn=0x00000000004A1308 string=0x00000000004A130C "I"
 *   insn=0x00000000004A1310 string=0x00000000004A1314 "\n"
 *   insn=0x00000000004A1314 string=0x00000000004A1318 "H%@)X"
 *   insn=0x00000000004A1318 string=0x00000000004A131C "X"
 *   insn=0x00000000004A132C string=0x00000000004A1330 ""
 *   insn=0x00000000004A1334 string=0x00000000004A1338 "\t"
 *   insn=0x00000000004A133C string=0x00000000004A1340 " "
 *   insn=0x00000000004A1348 string=0x00000000004A134C """
 *   insn=0x00000000004A1350 string=0x00000000004A1354 " "
 *   insn=0x00000000004A1368 string=0x00000000004A136C ""
 *   insn=0x00000000004A1370 string=0x00000000004A1374 "\t"
 *   insn=0x00000000004A1378 string=0x00000000004A137C " "
 *   insn=0x00000000004A1384 string=0x00000000004A1388 """
 *   insn=0x00000000004A138C string=0x00000000004A1390 " "
 *   insn=0x00000000004A13A8 string=0x00000000001F6E00 "0'"
 *   insn=0x00000000004A13B8 string=0x00000000004A13BC "`B"
 *   insn=0x00000000004A13C8 string=0x00000000004A13CC "!"
 *   insn=0x00000000004A13F0 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIView::SetTouchBoundsToIncludeSubviewTouchBounds(__int64 this)
{
  __int64 v1; // x19
  _QWORD *v2; // x21
  _QWORD *v3; // x22
  __int64 *v4; // x23
  __int64 v5; // x2
  __int64 *v6; // x25
  unsigned int *v7; // x10
  unsigned int v8; // w8
  unsigned int v9; // w9
  __int64 v10; // x24
  __int64 v11; // x0
  __int64 v12; // x25
  __int64 v13; // t1
  __int64 v14; // x0
  __int64 *v15; // x25
  __int64 v16; // x2
  __int64 v17; // x25
  __int64 v18; // t1
  _QWORD v19[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v20; // [xsp+10h] [xbp-60h] BYREF
  _QWORD v21[2]; // [xsp+20h] [xbp-50h] BYREF

  v1 = this;
  v21[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v20 = *(_OWORD *)(this + 132);
  v2 = (_QWORD *)(this + 32);
  v3 = *(_QWORD **)(this + 32);
  if ( (_QWORD *)(this + 32) != v3 )
  {
    v4 = (__int64 *)(this + 88);
    do
    {
      v5 = v3[2];
      v6 = (__int64 *)(v5 + 88);
      if ( *(_QWORD *)(v5 + 88) == v1 )
      {
        if ( *(float *)(v5 + 156) <= 0.001 )
          v7 = (unsigned int *)(v5 + 132);
        else
          v7 = (unsigned int *)(v5 + 148);
        v8 = *v7;
        v9 = v7[1];
        v10 = *((_QWORD *)v7 + 1);
        LODWORD(v21[0]) = *v7;
        HIDWORD(v21[0]) = v9;
        if ( v5 && v1 )
        {
          v11 = v1;
          do
          {
            (*(void (__fastcall **)(_QWORD *__return_ptr, __int64, _QWORD *))(*(_QWORD *)v11 + 264LL))(v19, v11, v21);
            v8 = v19[0];
            v9 = HIDWORD(v19[0]);
            v21[0] = v19[0];
            v12 = *v6;
            v13 = *(_QWORD *)(v12 + 88);
            v6 = (__int64 *)(v12 + 88);
            v11 = v13;
          }
          while ( v13 );
        }
        v14 = *v4;
        if ( *v4 )
        {
          v15 = (__int64 *)(v1 + 88);
          v16 = v1;
          do
          {
            (*(void (__fastcall **)(_QWORD *__return_ptr, __int64, _QWORD *, __int64))(*(_QWORD *)v14 + 256LL))(
              v19,
              v14,
              v21,
              v16);
            v8 = v19[0];
            v9 = HIDWORD(v19[0]);
            v21[0] = v19[0];
            v16 = *v15;
            v17 = *v15;
            v18 = *(_QWORD *)(v17 + 88);
            v15 = (__int64 *)(v17 + 88);
            v14 = v18;
          }
          while ( v18 );
        }
        v19[0] = __PAIR64__(v9, v8);
        v19[1] = v10;
        this = Caver::Rectangle::ExpandToincludeRectangle((Caver::Rectangle *)&v20, (const Caver::Rectangle *)v19);
      }
      v3 = (_QWORD *)*v3;
    }
    while ( v2 != v3 );
  }
  *(_OWORD *)(v1 + 148) = v20;
  return this;
}

