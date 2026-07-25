/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000238650
 * Mangled: _ZN5Caver14ShapeComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::ShapeComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x00000000001F46B0  Caver::ShapeComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 11
 *   0x00000000001F46B0  Caver::ShapeComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F61A0  Caver::Shape::ShapeWithCircle(Caver::Circle const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9320  Caver::Component::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000001FD7C0  Caver::Shape::ShapeWithRectangle(Caver::Rectangle const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 131
 *   insn=0x0000000000238668 string=0x000000000023866C "W"
 *   insn=0x0000000000238684 string=0x0000000000238688 "A"
 *   insn=0x0000000000238688 string=0x00000000002386D0 "hr@"
 *   insn=0x00000000002386AC string=0x00000000002386B0 "("
 *   insn=0x00000000002386B0 string=0x00000000002386B4 "_"
 *   insn=0x00000000002386C0 string=0x00000000001F5190 "P'"
 *   insn=0x00000000002386C8 string=0x00000000002386CC """
 *   insn=0x00000000002386CC string=0x0000000000238754 "y%"
 *   insn=0x00000000002386D8 string=0x0000000000238874 "i>@"
 *   insn=0x00000000002386DC string=0x00000000002386E0 "A"
 *   insn=0x00000000002386E0 string=0x00000000002386E4 "k>@"
 *   insn=0x00000000002386EC string=0x00000000002386F0 "h%@)"
 *   insn=0x00000000002386F4 string=0x00000000002386F8 "j-A)"
 *   insn=0x00000000002386FC string=0x0000000000238700 "H"
 *   insn=0x0000000000238700 string=0x0000000000238704 "m"
 *   insn=0x0000000000238704 string=0x00000000005847B8 "p?"
 *   insn=0x000000000023870C string=0x0000000000238710 " "
 *   insn=0x0000000000238710 string=0x0000000000238714 "a"
 *   insn=0x0000000000238714 string=0x0000000000238718 "B"
 *   insn=0x0000000000238728 string=0x000000000023872C "b(""
 *   insn=0x0000000000238730 string=0x0000000000238734 "B8$"
 *   insn=0x0000000000238740 string=0x0000000000238744 "H  "
 *   insn=0x0000000000238748 string=0x0000000000238958 "D@!"
 *   insn=0x000000000023874C string=0x0000000000238968 "(  "
 *   insn=0x0000000000238754 string=0x0000000000238758 "9"
 *   insn=0x000000000023875C string=0x0000000000238760 "!"
 *   insn=0x0000000000238760 string=0x0000000000238764 "("
 *   insn=0x0000000000238760 string=0x0000000000238A24 "j%"
 *   insn=0x0000000000238764 string=0x0000000000238768 "hr@"
 *   insn=0x0000000000238770 string=0x0000000000238774 "h"
 *   insn=0x000000000023877C string=0x0000000000238780 ""
 *   insn=0x000000000023878C string=0x0000000000238790 "f"
 *   insn=0x00000000002387A0 string=0x00000000002387A4 "("
 *   insn=0x00000000002387A4 string=0x00000000002387A8 "_"
 *   insn=0x00000000002387B0 string=0x00000000002387B4 "w"
 *   insn=0x00000000002387C4 string=0x00000000002387D8 "("
 *   insn=0x00000000002387C8 string=0x0000000000238A48 "j%"
 *   insn=0x00000000002387D8 string=0x00000000002387DC "hr@"
 *   insn=0x00000000002387E4 string=0x00000000002387E8 "h"
 *   insn=0x00000000002387F0 string=0x00000000002387F4 ""
 *   insn=0x0000000000238800 string=0x0000000000238804 "I"
 *   insn=0x0000000000238814 string=0x0000000000238818 "("
 *   insn=0x0000000000238818 string=0x000000000023881C "_"
 *   insn=0x0000000000238824 string=0x0000000000238828 "Z"
 *   insn=0x0000000000238838 string=0x000000000023884C "v"
 *   insn=0x000000000023883C string=0x0000000000238A6C "i%"
 *   insn=0x0000000000238844 string=0x0000000000238848 "!"
 *   insn=0x000000000023884C string=0x0000000000238850 "hr@"
 *   insn=0x0000000000238858 string=0x000000000023885C "h"
 *   insn=0x0000000000238864 string=0x0000000000238868 ""
 *   insn=0x000000000023886C string=0x0000000000238870 "b"
 *   insn=0x0000000000238878 string=0x000000000023887C "("
 *   insn=0x0000000000238880 string=0x0000000000238884 " A@"
 *   insn=0x0000000000238898 string=0x000000000023889C "a\n"
 *   insn=0x00000000002388A0 string=0x00000000002388A4 ""
 *   insn=0x00000000002388A8 string=0x00000000002388AC ""
 *   insn=0x00000000002388AC string=0x00000000002388D8 "h"
 *   insn=0x00000000002388B0 string=0x00000000002388B4 ")"
 *   insn=0x00000000002388B8 string=0x00000000002388BC ""
 *   insn=0x00000000002388C4 string=0x00000000002388C8 ")"
 *   insn=0x00000000002388C8 string=0x00000000002388CC ""
 *   insn=0x00000000002388D0 string=0x00000000002388D4 " "
 *   insn=0x00000000002388E4 string=0x00000000002388E8 "."
 *   insn=0x00000000002388E8 string=0x00000000001F61A0 "0'"
 *   insn=0x00000000002388F4 string=0x00000000002388F8 "*"
 *   insn=0x0000000000238914 string=0x0000000000238918 "H  "
 *   insn=0x0000000000238928 string=0x000000000023892C "!8 "
 *   insn=0x0000000000238930 string=0x0000000000238934 "H  "
 *   insn=0x0000000000238938 string=0x000000000023893C ""
 *   insn=0x0000000000238944 string=0x0000000000238948 "B8#"
 *   insn=0x000000000023894C string=0x0000000000238950 "H  "
 *   insn=0x0000000000238958 string=0x000000000023895C "B(#"
 *   insn=0x000000000023896C string=0x0000000000238970 ""@!"
 *   insn=0x000000000023896C string=0x0000000000238980 "h"
 *   insn=0x0000000000238970 string=0x0000000000238974 " ( "
 *   insn=0x0000000000238990 string=0x00000000001FD7C0 "0'"
 *   insn=0x00000000002389A0 string=0x00000000002389A4 "6"
 *   insn=0x00000000002389A8 string=0x00000000002389AC ""
 *   insn=0x00000000002389BC string=0x00000000002389C0 "\t@"
 *   insn=0x00000000002389C8 string=0x00000000002389CC ""
 *   insn=0x00000000002389DC string=0x00000000002389E0 "@"
 *   insn=0x00000000002389F0 string=0x00000000002389F4 "K"
 *   insn=0x00000000002389F4 string=0x00000000001F9320 "0'"
 *   insn=0x0000000000238A24 string=0x0000000000238A28 "J=G"
 *   insn=0x0000000000238A2C string=0x0000000000238A30 "\n"
 *   insn=0x0000000000238A30 string=0x0000000000238A34 "*"
 *   insn=0x0000000000238A30 string=0x0000000000238A90 "*"
 *   insn=0x0000000000238A34 string=0x0000000000238A38 "K"
 *   insn=0x0000000000238A38 string=0x0000000000238A3C "+"
 *   insn=0x0000000000238A44 string=0x0000000000238A9C "_"
 *   insn=0x0000000000238A48 string=0x0000000000238A4C "J=G"
 *   insn=0x0000000000238A50 string=0x0000000000238A54 "j"
 *   insn=0x0000000000238A54 string=0x0000000000238A58 "*"
 *   insn=0x0000000000238A54 string=0x0000000000238AC0 "*"
 *   insn=0x0000000000238A58 string=0x0000000000238A5C "K"
 *   insn=0x0000000000238A5C string=0x0000000000238A60 "+"
 *   insn=0x0000000000238A68 string=0x0000000000238ACC "_"
 *   insn=0x0000000000238A6C string=0x0000000000238A70 ")=G"
 *   insn=0x0000000000238A78 string=0x0000000000238A7C "\t"
 *   insn=0x0000000000238A78 string=0x0000000000238AF0 "\t"
 *   insn=0x0000000000238A7C string=0x0000000000238A80 "*"
 *   insn=0x0000000000238A80 string=0x0000000000238A84 "\n"
 *   insn=0x0000000000238A8C string=0x0000000000238AFC "?"
 *   insn=0x0000000000238A90 string=0x0000000000238A94 "K"
 *   insn=0x0000000000238A94 string=0x0000000000238A98 "+"
 *   insn=0x0000000000238A9C string=0x0000000000238AA0 ","
 *   insn=0x0000000000238AAC string=0x0000000000238AB0 "="
 *   insn=0x0000000000238AB8 string=0x0000000000238ABC "3"
 *   insn=0x0000000000238AC0 string=0x0000000000238AC4 "K"
 *   insn=0x0000000000238AC4 string=0x0000000000238AC8 "+"
 *   insn=0x0000000000238ACC string=0x0000000000238AD0 "L"
 *   insn=0x0000000000238ADC string=0x0000000000238AE0 "1"
 *   insn=0x0000000000238AE8 string=0x0000000000238AEC "D"
 *   insn=0x0000000000238AF0 string=0x0000000000238AF4 "*"
 *   insn=0x0000000000238AF4 string=0x0000000000238AF8 "\n"
 *   insn=0x0000000000238AFC string=0x0000000000238B00 "l"
 *   insn=0x0000000000238B08 string=0x0000000000238B0C "&"
 *   insn=0x0000000000238B18 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000238B28 string=0x0000000000238B2C ""
 *   insn=0x0000000000238B30 string=0x0000000000238B34 "!"
 *   insn=0x0000000000238B38 string=0x0000000000238B3C "\t@"
 *   insn=0x0000000000238B48 string=0x0000000000238B4C ""
 *   insn=0x0000000000238B50 string=0x0000000000238B54 "!"
 *   insn=0x0000000000238B58 string=0x0000000000238B5C "@"
 *   insn=0x0000000000238B70 string=0x0000000000238B74 "4"
 *   insn=0x0000000000238B78 string=0x0000000000238B7C ""
 *   insn=0x0000000000238B88 string=0x0000000000238B8C "\t@"
 *   insn=0x0000000000238B98 string=0x0000000000238B9C ""
 *   insn=0x0000000000238BA8 string=0x0000000000238BAC "@"
 *   insn=0x0000000000238BB8 string=0x0000000000238BBC "B#"
 *   insn=0x0000000000238BC8 string=0x00000000001F46B0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ShapeComponent::SetValueForBindedProperty(Caver::ShapeComponent *this, int a2, float **a3)
{
  char *v6; // x22
  size_t v7; // x2
  __int64 *v8; // x21
  _BOOL4 v9; // w8
  int v10; // w8
  float *v11; // x11
  float v12; // w9
  float v13; // w10
  float v14; // w11
  float v15; // s0
  float v16; // s1
  float v17; // s2
  float v18; // s3
  float v19; // s4
  char *v20; // x22
  size_t v21; // x2
  __int64 *v22; // x21
  _BOOL4 v23; // w8
  char *v24; // x21
  size_t v25; // x2
  __int64 *v26; // x20
  _BOOL4 v27; // w22
  __int64 v28; // x9
  float v29; // w8
  __int64 v30; // d0
  int v31; // w9
  void (__fastcall *v32)(Caver::ShapeComponent *, void **); // x22
  float v33; // s4
  void (__fastcall *v34)(Caver::ShapeComponent *, void **); // x22
  _QWORD *v35; // x22
  __int64 v36; // x8
  __int64 v37; // x8
  unsigned int *v38; // x9
  int v39; // w10
  unsigned int *v40; // x9
  int v41; // w10
  unsigned int *v42; // x8
  int v43; // w9
  __int64 *v44; // x0
  _BOOL4 v45; // w21
  __int64 *v46; // x0
  _BOOL4 v47; // w21
  void *v48[2]; // [xsp+0h] [xbp-70h] BYREF
  _QWORD *v49; // [xsp+10h] [xbp-60h]
  float v50; // [xsp+18h] [xbp-58h]
  __int64 v51; // [xsp+1Ch] [xbp-54h]
  float v52; // [xsp+24h] [xbp-4Ch]
  __int64 v53; // [xsp+28h] [xbp-48h]

  v53 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a2 != 100 )
  {
    v10 = *((_DWORD *)this + 28);
    if ( v10 != 2 )
    {
      if ( v10 == 1 )
      {
        v11 = (float *)*((_QWORD *)this + 15);
        v12 = v11[1];
        v50 = *v11;
        *(float *)&v51 = v12;
        v13 = v11[2];
        v14 = v11[3];
        *((float *)&v51 + 1) = v13;
        v52 = v14;
        v15 = v12;
        v16 = v14;
        v17 = v13;
        v18 = v50;
        switch ( a2 )
        {
          case 'e':
            v19 = *a3[1];
            v17 = (float)(v50 + v13) - v19;
            *((float *)&v51 + 1) = v17;
            v50 = v19;
            v18 = v19;
            if ( v17 < 0.0 )
              goto LABEL_40;
            goto LABEL_41;
          case 'f':
            v17 = *a3[1] - v50;
            *((float *)&v51 + 1) = v17;
            if ( v17 < 0.0 )
              goto LABEL_40;
            goto LABEL_41;
          case 'g':
            v33 = *a3[1];
            v16 = (float)(v12 + v14) - v33;
            v52 = v16;
            *(float *)&v51 = v33;
            v15 = v33;
            if ( v13 >= 0.0 )
              goto LABEL_41;
            goto LABEL_40;
          case 'h':
            v16 = *a3[1] - v12;
            v52 = v16;
            if ( v13 >= 0.0 )
              goto LABEL_41;
LABEL_40:
            *((float *)&v51 + 1) = -v17;
            v50 = v17 + v18;
LABEL_41:
            if ( v16 < 0.0 )
            {
              v52 = -v16;
              *(float *)&v51 = v16 + v15;
            }
            v34 = *(void (__fastcall **)(Caver::ShapeComponent *, void **))(*(_QWORD *)this + 280LL);
            Caver::Shape::ShapeWithRectangle();
            v34(this, v48);
            goto LABEL_44;
          default:
            goto LABEL_48;
        }
      }
      goto LABEL_48;
    }
    v28 = *((_QWORD *)this + 15);
    v29 = *(float *)v28;
    v50 = *(float *)v28;
    v30 = *(_QWORD *)(v28 + 4);
    v51 = v30;
    switch ( a2 )
    {
      case 'i':
        v50 = *a3[1];
        LODWORD(v51) = v30;
        break;
      case 'j':
        v31 = *(_DWORD *)a3[1];
        v50 = v29;
        LODWORD(v51) = v31;
        break;
      case 'k':
        *((float *)&v51 + 1) = *a3[1];
        break;
      default:
LABEL_48:
        Caver::Component::SetValueForBindedProperty(this, a2, (const Caver::BindingValue *)a3);
        return;
    }
    v32 = *(void (__fastcall **)(Caver::ShapeComponent *, void **))(*(_QWORD *)this + 280LL);
    Caver::Shape::ShapeWithCircle();
    v32(this, v48);
LABEL_44:
    v35 = v49;
    if ( v49 )
    {
      v36 = v49[1] - 1LL;
      v49[1] = v36;
      if ( !v36 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v35 + 16LL))(v35);
        v37 = v35[2] - 1LL;
        v35[2] = v37;
        if ( !v37 )
          (*(void (__fastcall **)(_QWORD *))(*v35 + 24LL))(v35);
      }
    }
    goto LABEL_48;
  }
  sub_56A528(v48, a3[1]);
  v6 = (char *)v48[0];
  v8 = (__int64 *)((char *)v48[0] - 24);
  v7 = *((_QWORD *)v48[0] - 3);
  v9 = v7 == *(_QWORD *)(qword_6E8AC8 - 24) && memcmp(v48[0], (const void *)qword_6E8AC8, v7) == 0;
  if ( v8 == &qword_6FD2E0 )
    goto LABEL_11;
  v38 = (unsigned int *)(v6 - 8);
  if ( &pthread_create )
  {
    do
      v39 = __ldaxr(v38);
    while ( __stlxr(v39 - 1, v38) );
  }
  else
  {
    v39 = (*v38)--;
  }
  if ( v39 > 0 )
  {
LABEL_11:
    if ( !v9 )
      goto LABEL_14;
  }
  else
  {
    v44 = v8;
    v45 = v9;
    operator delete(v44);
    if ( !v45 )
      goto LABEL_14;
  }
  if ( *((_DWORD *)this + 28) != 1 )
    (*(void (__fastcall **)(Caver::ShapeComponent *, __int64))(*(_QWORD *)this + 288LL))(this, 1);
LABEL_14:
  sub_56A528(v48, a3[1]);
  v20 = (char *)v48[0];
  v22 = (__int64 *)((char *)v48[0] - 24);
  v21 = *((_QWORD *)v48[0] - 3);
  if ( v21 == *(_QWORD *)(qword_6E8AD0 - 24) )
  {
    v23 = memcmp(v48[0], (const void *)qword_6E8AD0, v21) == 0;
    if ( v22 == &qword_6FD2E0 )
      goto LABEL_18;
  }
  else
  {
    v23 = 0;
    if ( v22 == &qword_6FD2E0 )
      goto LABEL_18;
  }
  v40 = (unsigned int *)(v20 - 8);
  if ( &pthread_create )
  {
    do
      v41 = __ldaxr(v40);
    while ( __stlxr(v41 - 1, v40) );
  }
  else
  {
    v41 = (*v40)--;
  }
  if ( v41 <= 0 )
  {
    v46 = v22;
    v47 = v23;
    operator delete(v46);
    if ( !v47 )
      goto LABEL_21;
    goto LABEL_19;
  }
LABEL_18:
  if ( !v23 )
    goto LABEL_21;
LABEL_19:
  if ( *((_DWORD *)this + 28) != 2 )
    (*(void (__fastcall **)(Caver::ShapeComponent *, __int64))(*(_QWORD *)this + 288LL))(this, 2);
LABEL_21:
  sub_56A528(v48, a3[1]);
  v24 = (char *)v48[0];
  v26 = (__int64 *)((char *)v48[0] - 24);
  v25 = *((_QWORD *)v48[0] - 3);
  if ( v25 == *(_QWORD *)(qword_6E8AD8 - 24) )
  {
    v27 = memcmp(v48[0], (const void *)qword_6E8AD8, v25) == 0;
    if ( v26 == &qword_6FD2E0 )
      goto LABEL_25;
  }
  else
  {
    v27 = 0;
    if ( v26 == &qword_6FD2E0 )
      goto LABEL_25;
  }
  v42 = (unsigned int *)(v24 - 8);
  if ( &pthread_create )
  {
    do
      v43 = __ldaxr(v42);
    while ( __stlxr(v43 - 1, v42) );
  }
  else
  {
    v43 = (*v42)--;
  }
  if ( v43 > 0 )
  {
LABEL_25:
    if ( !v27 )
      return;
    goto LABEL_26;
  }
  operator delete(v26);
  if ( !v27 )
    return;
LABEL_26:
  if ( *((_DWORD *)this + 28) != 3 )
    (*(void (__fastcall **)(Caver::ShapeComponent *, __int64))(*(_QWORD *)this + 288LL))(this, 3);
}

