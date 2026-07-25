/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003C8890
 * Mangled: _ZN5Caver20ConfigureOverlayView7HitTestERKNS_7Vector2E
 * Demangled: Caver::ConfigureOverlayView::HitTest(Caver::Vector2 const&)
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9570  Caver::GUIView::HitTest(Caver::Vector2 const&)
 *   0x00000000001FA980  boost::throw_exception<boost::bad_weak_ptr>(boost::bad_weak_ptr const&)
 *   0x00000000001FABA0  Caver::GUIView::IsSubviewRemoved(boost::shared_ptr<Caver::GUIView> const&)
 *   0x00000000001FB420  Caver::GUIResponder::HandleKeyboardEvent(Caver::GUIKeyboardEvent const&)
 *   0x00000000001FF4A0  Caver::ConfigureOverlayView::ButtonPressed(void *,Caver::GUIEvent *)
 *   0x0000000000200070  std::exception::~exception()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 149
 *   insn=0x00000000003C88B4 string=0x00000000003C88B8 "X"
 *   insn=0x00000000003C88B8 string=0x00000000003C88BC "\t"
 *   insn=0x00000000003C88D0 string=0x00000000003C88D4 "\t"
 *   insn=0x00000000003C88D8 string=0x00000000003C88DC ""
 *   insn=0x00000000003C88E4 string=0x00000000003C88E8 "!"
 *   insn=0x00000000003C8914 string=0x00000000003C8918 ""
 *   insn=0x00000000003C8924 string=0x00000000003C8928 "q@"
 *   insn=0x00000000003C892C string=0x00000000003C8930 "@"
 *   insn=0x00000000003C8940 string=0x00000000001F9570 "0'"
 *   insn=0x00000000003C8954 string=0x00000000003C8958 "("
 *   insn=0x00000000003C8964 string=0x00000000003C8968 "\t"
 *   insn=0x00000000003C8978 string=0x00000000003C897C "H@"
 *   insn=0x00000000003C897C string=0x00000000003C8980 "\t!A"
 *   insn=0x00000000003C8988 string=0x00000000003C898C "\t"
 *   insn=0x00000000003C898C string=0x00000000003C8990 ")"
 *   insn=0x00000000003C8990 string=0x00000000003C8994 "\t"
 *   insn=0x00000000003C89A0 string=0x00000000003C89A4 "`\t"
 *   insn=0x00000000003C89A0 string=0x00000000001FABA0 "0'"
 *   insn=0x00000000003C89B0 string=0x00000000003C89B4 ")"
 *   insn=0x00000000003C89C8 string=0x00000000003C89CC " "
 *   insn=0x00000000003C89E0 string=0x00000000003C89E4 "<"
 *   insn=0x00000000003C89EC string=0x00000000003C89F0 "\t-@"
 *   insn=0x00000000003C89F0 string=0x00000000003C89F4 "?"
 *   insn=0x00000000003C8A08 string=0x00000000003C8A0C " "
 *   insn=0x00000000003C8A14 string=0x00000000003C8A18 "\n"
 *   insn=0x00000000003C8A18 string=0x00000000003C8A1C "@!)"
 *   insn=0x00000000003C8A1C string=0x00000000003C8A20 "E"
 *   insn=0x00000000003C8A28 string=0x00000000003C8A38 "3"
 *   insn=0x00000000003C8A2C string=0x00000000003C8A30 ""
 *   insn=0x00000000003C8A38 string=0x00000000003C8A3C "h"
 *   insn=0x00000000003C8A3C string=0x00000000003C8A40 ""
 *   insn=0x00000000003C8A40 string=0x00000000003C8A44 "h"
 *   insn=0x00000000003C8A48 string=0x00000000003C8A4C "h"
 *   insn=0x00000000003C8A4C string=0x00000000003C8A50 "\t@"
 *   insn=0x00000000003C8A58 string=0x00000000003C8A5C "h\n@"
 *   insn=0x00000000003C8A5C string=0x00000000003C8A60 ""
 *   insn=0x00000000003C8A60 string=0x00000000003C8A64 "h\n"
 *   insn=0x00000000003C8A68 string=0x00000000003C8A6C "h"
 *   insn=0x00000000003C8A6C string=0x00000000003C8A70 "@"
 *   insn=0x00000000003C8A80 string=0x00000000003C8A84 "I"
 *   insn=0x00000000003C8A88 string=0x00000000003C8A8C "7"
 *   insn=0x00000000003C8A90 string=0x00000000003C8A94 ""
 *   insn=0x00000000003C8AA0 string=0x00000000003C8AA4 "\t@"
 *   insn=0x00000000003C8AB0 string=0x00000000003C8AB4 ""
 *   insn=0x00000000003C8AC0 string=0x00000000003C8AC4 "@"
 *   insn=0x00000000003C8AD0 string=0x00000000003C8AD4 "7"
 *   insn=0x00000000003C8AD4 string=0x00000000003C8B18 "Z@"
 *   insn=0x00000000003C8AD8 string=0x00000000003C8ADC ""
 *   insn=0x00000000003C8AE8 string=0x00000000003C8AEC "\t@"
 *   insn=0x00000000003C8AF8 string=0x00000000003C8AFC ""
 *   insn=0x00000000003C8B08 string=0x00000000003C8B0C "@"
 *   insn=0x00000000003C8B18 string=0x00000000003C8B1C "("
 *   insn=0x00000000003C8B24 string=0x00000000003C8B28 "{"
 *   insn=0x00000000003C8B2C string=0x00000000003C8B30 "S"
 *   insn=0x00000000003C8B30 string=0x00000000003C8B34 "h"
 *   insn=0x00000000003C8B38 string=0x00000000003C8B3C ""
 *   insn=0x00000000003C8B3C string=0x00000000003C8B40 "h"
 *   insn=0x00000000003C8B40 string=0x00000000003C8B44 ","
 *   insn=0x00000000003C8B44 string=0x00000000003C8BF4 "h"
 *   insn=0x00000000003C8B50 string=0x00000000003C8B54 "("
 *   insn=0x00000000003C8B58 string=0x00000000003C8B5C ""
 *   insn=0x00000000003C8B5C string=0x00000000003C8B60 "("
 *   insn=0x00000000003C8B68 string=0x00000000003C8B6C "F"
 *   insn=0x00000000003C8B68 string=0x00000000003C8C44 "h"
 *   insn=0x00000000003C8B74 string=0x00000000003C8B78 ""
 *   insn=0x00000000003C8B80 string=0x00000000003C8B84 "."
 *   insn=0x00000000003C8B90 string=0x00000000003C8B94 "<"
 *   insn=0x00000000003C8BA0 string=0x00000000003C8BA4 "h"
 *   insn=0x00000000003C8BA8 string=0x00000000003C8BAC ""
 *   insn=0x00000000003C8BBC string=0x00000000003C8BC0 "\t@"
 *   insn=0x00000000003C8BCC string=0x00000000003C8BD0 ""
 *   insn=0x00000000003C8BDC string=0x00000000003C8BE0 "@"
 *   insn=0x00000000003C8BEC string=0x00000000003C8BF0 "s"
 *   insn=0x00000000003C8BF4 string=0x00000000003C8BF8 ""
 *   insn=0x00000000003C8BF8 string=0x00000000003C8BFC "h"
 *   insn=0x00000000003C8C00 string=0x00000000003C8C04 "h"
 *   insn=0x00000000003C8C04 string=0x00000000003C8C08 "\t@"
 *   insn=0x00000000003C8C10 string=0x00000000003C8C14 "h\n@"
 *   insn=0x00000000003C8C14 string=0x00000000003C8C18 ""
 *   insn=0x00000000003C8C18 string=0x00000000003C8C1C "h\n"
 *   insn=0x00000000003C8C20 string=0x00000000003C8C24 "h"
 *   insn=0x00000000003C8C24 string=0x00000000003C8C28 "@"
 *   insn=0x00000000003C8C3C string=0x00000000003C8C40 "3"
 *   insn=0x00000000003C8C44 string=0x00000000003C8C48 ""
 *   insn=0x00000000003C8C48 string=0x00000000003C8C4C "h"
 *   insn=0x00000000003C8C50 string=0x00000000003C8C54 "h"
 *   insn=0x00000000003C8C58 string=0x00000000003C8C5C "\t@"
 *   insn=0x00000000003C8C60 string=0x00000000003C8C64 "h\n@"
 *   insn=0x00000000003C8C64 string=0x00000000003C8C68 ""
 *   insn=0x00000000003C8C68 string=0x00000000003C8C6C "h\n"
 *   insn=0x00000000003C8C70 string=0x00000000003C8C74 "h"
 *   insn=0x00000000003C8C78 string=0x00000000003C8C7C "@"
 *   insn=0x00000000003C8C8C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003C8C90 string=0x00000000003C8C94 ""
 *   insn=0x00000000003C8C94 string=0x00000000003C8C98 "A"
 *   insn=0x00000000003C8CA0 string=0x00000000003C8CA4 "7"
 *   insn=0x00000000003C8CA4 string=0x00000000001FA980 "0'"
 *   insn=0x00000000003C8CB0 string=0x00000000003C8CB4 "s"
 *   insn=0x00000000003C8CB4 string=0x00000000003C8CB8 "J"
 *   insn=0x00000000003C8CB4 string=0x00000000003C8DA0 "h"
 *   insn=0x00000000003C8CC0 string=0x00000000003C8CC4 "G"
 *   insn=0x00000000003C8CD0 string=0x00000000003C8CD4 "U"
 *   insn=0x00000000003C8CD0 string=0x00000000003C8DE8 "h"
 *   insn=0x00000000003C8CDC string=0x00000000003C8CE0 "s"
 *   insn=0x00000000003C8CE0 string=0x00000000003C8CE4 "h"
 *   insn=0x00000000003C8CE4 string=0x00000000003C8CE8 ""
 *   insn=0x00000000003C8CE8 string=0x00000000003C8CEC "h"
 *   insn=0x00000000003C8CF0 string=0x00000000003C8CF4 "h"
 *   insn=0x00000000003C8CF4 string=0x00000000003C8CF8 "\t@"
 *   insn=0x00000000003C8D00 string=0x00000000003C8D04 "h\n@"
 *   insn=0x00000000003C8D04 string=0x00000000003C8D08 ""
 *   insn=0x00000000003C8D08 string=0x00000000003C8D0C "h\n"
 *   insn=0x00000000003C8D10 string=0x00000000003C8D14 "h"
 *   insn=0x00000000003C8D14 string=0x00000000003C8D18 "@"
 *   insn=0x00000000003C8D24 string=0x00000000003C8D28 ""
 *   insn=0x00000000003C8D30 string=0x00000000003C8D34 "U"
 *   insn=0x00000000003C8D38 string=0x00000000003C8D9C "3"
 *   insn=0x00000000003C8D44 string=0x00000000003C8D48 "&"
 *   insn=0x00000000003C8D54 string=0x00000000003C8D58 "5"
 *   insn=0x00000000003C8D5C string=0x00000000003C8D60 ""
 *   insn=0x00000000003C8D6C string=0x00000000003C8D70 "\t@"
 *   insn=0x00000000003C8D7C string=0x00000000003C8D80 ""
 *   insn=0x00000000003C8D8C string=0x00000000003C8D90 "@"
 *   insn=0x00000000003C8DA0 string=0x00000000003C8DA4 ""
 *   insn=0x00000000003C8DA4 string=0x00000000003C8DA8 "h"
 *   insn=0x00000000003C8DAC string=0x00000000003C8DB0 "h"
 *   insn=0x00000000003C8DB0 string=0x00000000003C8DB4 "\t@"
 *   insn=0x00000000003C8DBC string=0x00000000003C8DC0 "h\n@"
 *   insn=0x00000000003C8DC0 string=0x00000000003C8DC4 ""
 *   insn=0x00000000003C8DC4 string=0x00000000003C8DC8 "h\n"
 *   insn=0x00000000003C8DCC string=0x00000000003C8DD0 "h"
 *   insn=0x00000000003C8DD0 string=0x00000000003C8DD4 "@"
 *   insn=0x00000000003C8DE0 string=0x00000000003C8DE4 "3"
 *   insn=0x00000000003C8DE8 string=0x00000000003C8DEC ""
 *   insn=0x00000000003C8DEC string=0x00000000003C8DF0 "h"
 *   insn=0x00000000003C8DF4 string=0x00000000003C8DF8 "h"
 *   insn=0x00000000003C8DF8 string=0x00000000003C8DFC "\t@"
 *   insn=0x00000000003C8E04 string=0x00000000003C8E08 "h\n@"
 *   insn=0x00000000003C8E08 string=0x00000000003C8E0C ""
 *   insn=0x00000000003C8E0C string=0x00000000003C8E10 "h\n"
 *   insn=0x00000000003C8E14 string=0x00000000003C8E18 "h"
 *   insn=0x00000000003C8E18 string=0x00000000003C8E1C "@"
 *   insn=0x00000000003C8E2C string=0x00000000003C8E30 "G"
 *   insn=0x00000000003C8E30 string=0x00000000003C8E34 "("
 *   insn=0x00000000003C8E3C string=0x00000000003C8E40 "("
 *   insn=0x00000000003C8E3C string=0x00000000003C8E5C "q"
 *   insn=0x00000000003C8E44 string=0x00000000003C8E48 "`"
 *   insn=0x00000000003C8E4C string=0x00000000003C8E50 "a"
 *   insn=0x00000000003C8E5C string=0x00000000001FB420 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::ConfigureOverlayView::HitTest@<X0>(
        __int64 this@<X0>,
        const Caver::Vector2 *a2@<X1>,
        _QWORD *a3@<X8>)
{
  __int64 v3; // x21
  float v6; // s9
  _QWORD *v7; // x19
  __int64 v8; // x27
  __int64 v9; // x26
  __int64 v10; // x8
  _QWORD *v11; // x8
  void (__fastcall **v12)(std::exception *__hidden); // x9
  void (__fastcall **v13)(std::exception *__hidden); // x23
  _QWORD *(__fastcall *v14)(__int64 *__return_ptr, void (__fastcall **)(std::exception *__hidden), __int64 *); // x28
  __int64 v15; // x28
  __int64 v16; // x9
  __int64 v17; // x8
  float32x2_t v18; // d0
  float v19; // s10
  _QWORD *v20; // x23
  __int64 v21; // x8
  __int64 v22; // x8
  _QWORD *v23; // x23
  __int64 v24; // x8
  __int64 v25; // x8
  _QWORD *v26; // x23
  __int64 v27; // x8
  __int64 v28; // x8
  int v29; // w21
  _QWORD *v30; // x9
  _QWORD *v31; // x19
  _QWORD *v32; // x22
  __int64 v33; // x8
  __int64 v34; // x8
  __int64 v35; // x8
  __int64 v36; // x8
  __int64 v37; // x8
  __int64 v38; // x8
  __int64 v39; // x8
  __int64 v40; // x0
  __int64 v41; // x20
  __int64 v42; // x8
  __int64 v43; // x8
  _QWORD *v44; // x19
  __int64 v45; // x8
  __int64 v46; // x8
  __int64 v47; // x0
  __int64 v48; // x1
  int v49; // w8
  __int64 v50; // [xsp+0h] [xbp-B0h] BYREF
  __int64 v51; // [xsp+8h] [xbp-A8h] BYREF
  _QWORD *v52; // [xsp+10h] [xbp-A0h]
  void (__fastcall **v53)(std::exception *__hidden); // [xsp+18h] [xbp-98h] BYREF
  _QWORD *v54; // [xsp+20h] [xbp-90h]
  __int64 v55; // [xsp+28h] [xbp-88h] BYREF
  _QWORD *v56; // [xsp+30h] [xbp-80h]
  __int64 v57; // [xsp+38h] [xbp-78h]

  v3 = this;
  v57 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(_BYTE *)(this + 228) )
    goto LABEL_2;
  if ( !*(_BYTE *)(this + 229) )
    goto LABEL_2;
  this = (*(__int64 (__fastcall **)(__int64, const Caver::Vector2 *))(*(_QWORD *)this + 224LL))(this, a2);
  if ( (this & 1) == 0 )
    goto LABEL_2;
  this = (__int64)Caver::GUIView::HitTest(&v55, (Caver::GUIView *)v3, a2);
  if ( v55 != *(_QWORD *)(v3 + 264) )
  {
    if ( *(_QWORD *)(v3 + 32) == v3 + 32 )
    {
      v7 = 0;
    }
    else
    {
      v6 = 3.4028e38;
      v7 = 0;
      v8 = 0;
      v9 = v3 + 32;
      do
      {
        v10 = *(_QWORD *)(v9 + 8);
        v12 = *(void (__fastcall ***)(std::exception *__hidden))(v10 + 16);
        v11 = *(_QWORD **)(v10 + 24);
        v53 = v12;
        v54 = v11;
        if ( v11 )
          ++v11[1];
        this = Caver::GUIView::IsSubviewRemoved();
        if ( (this & 1) == 0 )
        {
          v13 = v53;
          v14 = (_QWORD *(__fastcall *)(__int64 *__return_ptr, void (__fastcall **)(std::exception *__hidden), __int64 *))*((_QWORD *)*v53 + 29);
          (*(void (__fastcall **)(__int64 *__return_ptr, __int64, const Caver::Vector2 *, void (__fastcall **)(std::exception *__hidden)))(*(_QWORD *)v3 + 256LL))(
            &v50,
            v3,
            a2,
            v53);
          this = (__int64)v14(&v51, v13, &v50);
          v15 = v51;
          if ( v51 )
          {
            v16 = v51;
            do
            {
              v17 = v16;
              v16 = *(_QWORD *)(v16 + 88);
            }
            while ( v16 != v3 );
            v18.n64_u64[0] = vsub_f32(
                               vadd_f32(
                                 *(float32x2_t *)(v17 + 116),
                                 vmul_f32(*(float32x2_t *)(v17 + 124), (float32x2_t)0x3F0000003F000000LL)),
                               *(float32x2_t *)a2).n64_u64[0];
            v19 = vaddv_f32(vmul_f32(v18, v18));
            if ( v19 < v6 )
            {
              v20 = v52;
              if ( v52 )
                ++v52[1];
              if ( v7 )
              {
                v21 = v7[1] - 1LL;
                v7[1] = v21;
                if ( !v21 )
                {
                  this = (*(__int64 (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
                  v22 = v7[2] - 1LL;
                  v7[2] = v22;
                  if ( !v22 )
                    this = (*(__int64 (__fastcall **)(_QWORD *))(*v7 + 24LL))(v7);
                }
              }
              v8 = v15;
              v7 = v20;
              v6 = v19;
            }
          }
          v23 = v52;
          if ( v52 )
          {
            v24 = v52[1] - 1LL;
            v52[1] = v24;
            if ( !v24 )
            {
              this = (*(__int64 (__fastcall **)(_QWORD *))(*v23 + 16LL))(v23);
              v25 = v23[2] - 1LL;
              v23[2] = v25;
              if ( !v25 )
                this = (*(__int64 (__fastcall **)(_QWORD *))(*v23 + 24LL))(v23);
            }
          }
        }
        v26 = v54;
        if ( v54 )
        {
          v27 = v54[1] - 1LL;
          v54[1] = v27;
          if ( !v27 )
          {
            this = (*(__int64 (__fastcall **)(_QWORD *))(*v26 + 16LL))(v26);
            v28 = v26[2] - 1LL;
            v26[2] = v28;
            if ( !v28 )
              this = (*(__int64 (__fastcall **)(_QWORD *))(*v26 + 24LL))(v26);
          }
        }
        v9 = *(_QWORD *)(v9 + 8);
      }
      while ( *(_QWORD *)(v3 + 32) != v9 );
      if ( v8 )
      {
        *a3 = v8;
        a3[1] = v7;
        if ( !v7 )
        {
          v29 = 1;
          goto LABEL_54;
        }
        v29 = 1;
        ++v7[1];
        goto LABEL_50;
      }
    }
    if ( *(_BYTE *)(v3 + 230) )
    {
      v29 = 0;
      if ( !v7 )
        goto LABEL_54;
    }
    else
    {
      v32 = *(_QWORD **)(v3 + 16);
      if ( !v32 || (v33 = v32[1]) == 0 )
      {
        v53 = off_6CC4E8;
        boost::throw_exception<boost::bad_weak_ptr>();
        v41 = v40;
        std::exception::~exception((std::exception *)&v53);
        if ( v7 )
        {
          v42 = v7[1] - 1LL;
          v7[1] = v42;
          if ( !v42 )
          {
            (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
            v43 = v7[2] - 1LL;
            v7[2] = v43;
            if ( !v43 )
              (*(void (__fastcall **)(_QWORD *))(*v7 + 24LL))(v7);
          }
        }
        v44 = v56;
        if ( v56 )
        {
          v45 = v56[1] - 1LL;
          v56[1] = v45;
          if ( !v45 )
          {
            (*(void (__fastcall **)(_QWORD *))(*v44 + 16LL))(v44);
            v46 = v44[2] - 1LL;
            v44[2] = v46;
            if ( !v46 )
              (*(void (__fastcall **)(_QWORD *))(*v44 + 24LL))(v44);
          }
        }
        v47 = sub_5818C4(v41);
        ((void (__fastcall *)(__int64))loc_20E34C)(v47);
        if ( *(_DWORD *)(v48 + 12) == 1 && ((v49 = *(_DWORD *)(v48 + 16), v49 == 33) || v49 == 27) )
          return Caver::ConfigureOverlayView::ButtonPressed();
        else
          return Caver::GUIResponder::HandleKeyboardEvent();
      }
      v34 = v33 + 1;
      *a3 = *(_QWORD *)(v3 + 8);
      a3[1] = v32;
      v32[1] = v34;
      if ( !v34 )
      {
        this = (*(__int64 (__fastcall **)(_QWORD *))(*v32 + 16LL))(v32);
        v35 = v32[2] - 1LL;
        v32[2] = v35;
        if ( !v35 )
          this = (*(__int64 (__fastcall **)(_QWORD *))(*v32 + 24LL))(v32);
      }
      v29 = 1;
      if ( !v7 )
      {
LABEL_54:
        v31 = v56;
        if ( !v56 )
          goto LABEL_58;
        goto LABEL_55;
      }
    }
LABEL_50:
    v36 = v7[1] - 1LL;
    v7[1] = v36;
    if ( !v36 )
    {
      this = (*(__int64 (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
      v37 = v7[2] - 1LL;
      v7[2] = v37;
      if ( !v37 )
        this = (*(__int64 (__fastcall **)(_QWORD *))(*v7 + 24LL))(v7);
    }
    goto LABEL_54;
  }
  v30 = v56;
  *a3 = v55;
  a3[1] = v30;
  if ( v30 )
  {
    v29 = 1;
    ++v30[1];
    v31 = v56;
    if ( !v56 )
      goto LABEL_58;
  }
  else
  {
    v29 = 1;
    v31 = v56;
    if ( !v56 )
      goto LABEL_58;
  }
LABEL_55:
  v38 = v31[1] - 1LL;
  v31[1] = v38;
  if ( !v38 )
  {
    this = (*(__int64 (__fastcall **)(_QWORD *))(*v31 + 16LL))(v31);
    v39 = v31[2] - 1LL;
    v31[2] = v39;
    if ( !v39 )
      this = (*(__int64 (__fastcall **)(_QWORD *))(*v31 + 24LL))(v31);
  }
LABEL_58:
  if ( !v29 )
  {
LABEL_2:
    *a3 = 0;
    a3[1] = 0;
  }
  return this;
}

