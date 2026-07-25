/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A0964
 * Mangled: _ZN5Caver7GUIView7HitTestERKNS_7Vector2E
 * Demangled: Caver::GUIView::HitTest(Caver::Vector2 const&)
 *
 * Callers: 1
 *   0x00000000001F9570  Caver::GUIView::HitTest(Caver::Vector2 const&)
 *
 * Callees: 5
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FA980  boost::throw_exception<boost::bad_weak_ptr>(boost::bad_weak_ptr const&)
 *   0x0000000000200070  std::exception::~exception()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 65
 *   insn=0x00000000004A0980 string=0x00000000004A0984 "X"
 *   insn=0x00000000004A0984 string=0x00000000004A0988 "\t"
 *   insn=0x00000000004A09A4 string=0x00000000004A09A8 ""
 *   insn=0x00000000004A09D8 string=0x00000000004A09DC "H"
 *   insn=0x00000000004A09E8 string=0x00000000004A09EC "q@"
 *   insn=0x00000000004A09F8 string=0x00000000004A09FC "("
 *   insn=0x00000000004A0A08 string=0x00000000004A0A0C "H@"
 *   insn=0x00000000004A0A18 string=0x00000000004A0A1C ""
 *   insn=0x00000000004A0A34 string=0x00000000004A0A38 "#"
 *   insn=0x00000000004A0A38 string=0x00000000004A0AC4 "h"
 *   insn=0x00000000004A0A40 string=0x00000000004A0A44 "u@"
 *   insn=0x00000000004A0A44 string=0x00000000004A0A48 ")"
 *   insn=0x00000000004A0A58 string=0x00000000004A0A5C " "
 *   insn=0x00000000004A0A68 string=0x00000000004A0A6C "`"
 *   insn=0x00000000004A0A6C string=0x00000000004A0A70 "h"
 *   insn=0x00000000004A0A78 string=0x00000000004A0A7C "h"
 *   insn=0x00000000004A0A7C string=0x00000000004A0A80 "6"
 *   insn=0x00000000004A0A7C string=0x00000000004A0AE8 "w"
 *   insn=0x00000000004A0A84 string=0x00000000004A0A88 ""
 *   insn=0x00000000004A0A98 string=0x00000000004A0A9C "\t@"
 *   insn=0x00000000004A0AA4 string=0x00000000004A0AA8 ""
 *   insn=0x00000000004A0AB8 string=0x00000000004A0ABC "@"
 *   insn=0x00000000004A0AC4 string=0x00000000004A0AC8 "\t"
 *   insn=0x00000000004A0AD0 string=0x00000000004A0AD4 "Z@"
 *   insn=0x00000000004A0AD4 string=0x00000000004A0AD8 "("
 *   insn=0x00000000004A0ADC string=0x00000000004A0AE0 "a"
 *   insn=0x00000000004A0AF0 string=0x00000000004A0AF4 ""
 *   insn=0x00000000004A0AF8 string=0x00000000004A0AFC "!"
 *   insn=0x00000000004A0B00 string=0x00000000004A0B04 "\t@"
 *   insn=0x00000000004A0B10 string=0x00000000004A0B14 ""
 *   insn=0x00000000004A0B18 string=0x00000000004A0B1C "!"
 *   insn=0x00000000004A0B20 string=0x00000000004A0B24 "@"
 *   insn=0x00000000004A0B34 string=0x00000000004A0B38 "h"
 *   insn=0x00000000004A0B40 string=0x00000000004A0B98 "("
 *   insn=0x00000000004A0B4C string=0x00000000004A0B50 ""
 *   insn=0x00000000004A0B50 string=0x00000000004A0B54 "iV"
 *   insn=0x00000000004A0B58 string=0x00000000004A0B5C "a"
 *   insn=0x00000000004A0B64 string=0x00000000004A0B68 "\t@"
 *   insn=0x00000000004A0B70 string=0x00000000004A0B74 ""
 *   insn=0x00000000004A0B78 string=0x00000000004A0B7C "a"
 *   insn=0x00000000004A0B84 string=0x00000000004A0B88 "@"
 *   insn=0x00000000004A0B94 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004A0B98 string=0x00000000004A0B9C ""
 *   insn=0x00000000004A0B9C string=0x00000000004A0BA0 "A"
 *   insn=0x00000000004A0BA8 string=0x00000000004A0BAC "ug"
 *   insn=0x00000000004A0BAC string=0x00000000001FA980 "0'"
 *   insn=0x00000000004A0BB4 string=0x00000000004A0BB8 ".}"
 *   insn=0x00000000004A0BBC string=0x00000000004A0BC0 "A"
 *   insn=0x00000000004A0BD0 string=0x00000000004A0BD4 "6"
 *   insn=0x00000000004A0BD8 string=0x00000000004A0BDC ""
 *   insn=0x00000000004A0BE8 string=0x00000000004A0BEC "\t@"
 *   insn=0x00000000004A0BF8 string=0x00000000004A0BFC ""
 *   insn=0x00000000004A0C08 string=0x00000000004A0C0C "@"
 *   insn=0x00000000004A0C18 string=0x00000000004A0C1C "*"
 *   insn=0x00000000004A0C34 string=0x00000000004A0C38 "U"
 *   insn=0x00000000004A0C48 string=0x00000000004A0C4C ")"
 *   insn=0x00000000004A0C50 string=0x00000000004A0C54 "B"
 *   insn=0x00000000004A0C60 string=0x00000000004A0C64 "\t"
 *   insn=0x00000000004A0C68 string=0x00000000004A0C6C " "
 *   insn=0x00000000004A0C84 string=0x00000000004A0C88 "\n"
 *   insn=0x00000000004A0C84 string=0x00000000004A0C5C ""
 *   insn=0x00000000004A0C94 string=0x00000000004A0C98 "\t"
 *   insn=0x00000000004A0C9C string=0x00000000004A0CA0 " "
 *   insn=0x00000000004A0CB8 string=0x00000000004A0C8C ""
 *   insn=0x00000000004A0CC8 string=0x00000000004A0CE0 "|U"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::GUIView::HitTest@<X0>(__int64 this@<X0>, const Caver::Vector2 *a2@<X1>, _QWORD *a3@<X8>)
{
  _QWORD *v3; // x22
  __int64 v4; // x30
  __int64 v5; // x20
  __int64 v8; // x26
  __int64 v9; // x8
  _QWORD *v10; // x23
  char v11; // w27
  __int64 (__fastcall *v12)(_QWORD *, _QWORD *); // x27
  __int64 v13; // x8
  __int64 v14; // x8
  _QWORD *v15; // x23
  __int64 v16; // x8
  __int64 v17; // x8
  _QWORD *v18; // x21
  __int64 v19; // x8
  __int64 v20; // x8
  __int64 v21; // x8
  __int64 v22; // x0
  __int64 v23; // x19
  __int64 v24; // x19
  __int64 v25; // x8
  __int64 v26; // x8
  __int64 v27; // x0
  __int64 v28; // x2
  __int64 v29; // x19
  _QWORD *v30; // x8
  _QWORD *v31; // x20
  _QWORD *v32; // x1
  __int64 v33; // x0
  __int64 *v34; // x22
  _QWORD v35[8]; // [xsp+0h] [xbp-A0h] BYREF
  _QWORD v36[2]; // [xsp+40h] [xbp-60h] BYREF
  __int64 vars0; // [xsp+A0h] [xbp+0h] BYREF

  v5 = this;
  v36[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(_BYTE *)(this + 228) )
    goto LABEL_2;
  if ( !*(_BYTE *)(this + 229) )
    goto LABEL_2;
  this = (*(__int64 (__fastcall **)(__int64, const Caver::Vector2 *))(*(_QWORD *)this + 224LL))(this, a2);
  if ( (this & 1) == 0 )
    goto LABEL_2;
  if ( *(_QWORD *)(v5 + 32) != v5 + 32 )
  {
    v8 = v5 + 32;
    while ( 1 )
    {
      v9 = *(_QWORD *)(v8 + 8);
      v10 = *(_QWORD **)(v9 + 16);
      v3 = *(_QWORD **)(v9 + 24);
      if ( v3 )
        ++v3[1];
      if ( v10[11] == v5 )
        break;
      v11 = 4;
      if ( v3 )
        goto LABEL_15;
LABEL_18:
      if ( (v11 & 3 | 4) != 4 )
        return this;
      v8 = *(_QWORD *)(v8 + 8);
      if ( *(_QWORD *)(v5 + 32) == v8 )
        goto LABEL_25;
    }
    v12 = *(__int64 (__fastcall **)(_QWORD *, _QWORD *))(*v10 + 232LL);
    (*(void (__fastcall **)(_QWORD *__return_ptr, __int64, const Caver::Vector2 *, _QWORD *))(*(_QWORD *)v5 + 256LL))(
      v36,
      v5,
      a2,
      v10);
    this = v12(v10, v36);
    v11 = *a3 != 0;
    if ( !*a3 )
    {
      v15 = (_QWORD *)a3[1];
      if ( v15 )
      {
        v16 = v15[1] - 1LL;
        v15[1] = v16;
        if ( !v16 )
        {
          this = (*(__int64 (__fastcall **)(_QWORD *))(*v15 + 16LL))(v15);
          v17 = v15[2] - 1LL;
          v15[2] = v17;
          if ( !v17 )
            this = (*(__int64 (__fastcall **)(_QWORD *))(*v15 + 24LL))(v15);
        }
      }
    }
    if ( !v3 )
      goto LABEL_18;
LABEL_15:
    v13 = v3[1] - 1LL;
    v3[1] = v13;
    if ( !v13 )
    {
      this = (*(__int64 (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3);
      v14 = v3[2] - 1LL;
      v3[2] = v14;
      if ( !v14 )
        this = (*(__int64 (__fastcall **)(_QWORD *))(*v3 + 24LL))(v3);
    }
    goto LABEL_18;
  }
LABEL_25:
  if ( *(_BYTE *)(v5 + 230) )
  {
LABEL_2:
    *a3 = 0;
    a3[1] = 0;
  }
  else
  {
    v18 = *(_QWORD **)(v5 + 16);
    if ( v18 && (v19 = v18[1]) != 0 )
    {
      v20 = v19 + 1;
      *a3 = *(_QWORD *)(v5 + 8);
      a3[1] = v18;
      v18[1] = v20;
      if ( !v20 )
      {
        this = (*(__int64 (__fastcall **)(_QWORD *))(*v18 + 16LL))(v18);
        v21 = v18[2] - 1LL;
        v18[2] = v21;
        if ( !v21 )
          return (*(__int64 (__fastcall **)(_QWORD *))(*v18 + 24LL))(v18);
      }
    }
    else
    {
      v36[0] = off_6CC4E8;
      boost::throw_exception<boost::bad_weak_ptr>();
      v23 = v22;
      std::exception::~exception((std::exception *)v36);
      v24 = sub_5818C4(v23);
      if ( v3 )
      {
        v25 = v3[1] - 1LL;
        v3[1] = v25;
        if ( !v25 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3);
          v26 = v3[2] - 1LL;
          v3[2] = v26;
          if ( !v26 )
            (*(void (__fastcall **)(_QWORD *))(*v3 + 24LL))(v3);
        }
      }
      v27 = sub_5818C4(v24);
      v35[2] = v3;
      v35[3] = v18;
      v35[4] = v5;
      v35[5] = v24;
      v35[6] = &vars0;
      v35[7] = v4;
      v29 = ((__int64 (__fastcall *)(__int64))loc_20E34C)(v27);
      v31 = v30;
      v35[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
      *v30 = *v32;
      if ( v28 )
      {
        while ( 1 )
        {
          v34 = (__int64 *)(v28 + 88);
          v33 = *(_QWORD *)(v28 + 88);
          if ( !v33 )
            break;
          (*(void (__fastcall **)(_QWORD *__return_ptr, __int64, _QWORD *))(*(_QWORD *)v33 + 264LL))(v35, v33, v31);
          *v31 = v35[0];
          v28 = *v34;
        }
      }
      while ( 1 )
      {
        this = *(_QWORD *)(v29 + 88);
        if ( !this )
          break;
        (*(void (__fastcall **)(_QWORD *__return_ptr, __int64, _QWORD *, __int64))(*(_QWORD *)this + 256LL))(
          v35,
          this,
          v31,
          v29);
        *v31 = v35[0];
        v29 = *(_QWORD *)(v29 + 88);
      }
    }
  }
  return this;
}

