/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003A899C
 * Mangled: _ZN5Caver25ProfileManagerLoadingView6UpdateEf
 * Demangled: Caver::ProfileManagerLoadingView::Update(float)
 *
 * Callers: 0
 *
 * Callees: 15
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8510  Caver::GUILabel::UpdateText(void)
 *   0x00000000001F8A30  Caver::GUIView::AddAnimation(boost::shared_ptr<Caver::GUIAnimation> const&)
 *   0x00000000001FA5A0  Caver::GUIView::RemoveAllAnimations(void)
 *   0x00000000001FE6C0  Caver::GUIView::Update(float)
 *   0x0000000000200B40  Caver::GUIAnimation::AlphaAnimation(float,float,float)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003A8C90  Caver::ProfileManagerLoadingView::~ProfileManagerLoadingView()
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005677D4  sub_5677D4
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 75
 *   insn=0x00000000003A89B4 string=0x00000000003A89B8 "W"
 *   insn=0x00000000003A89BC string=0x00000000003A89C0 ""
 *   insn=0x00000000003A89C8 string=0x00000000003A89CC "=W"
 *   insn=0x00000000003A89CC string=0x00000000003A89D0 "`"
 *   insn=0x00000000003A89DC string=0x00000000003A89E0 "`"
 *   insn=0x00000000003A89E4 string=0x00000000003A89E8 ""
 *   insn=0x00000000003A89E8 string=0x00000000003A89EC "h"
 *   insn=0x00000000003A89E8 string=0x00000000003A8AA8 "`"
 *   insn=0x00000000003A89F8 string=0x00000000003A89FC "("
 *   insn=0x00000000003A89FC string=0x00000000003A8A00 "h"
 *   insn=0x00000000003A8A00 string=0x00000000003A8A04 "A"
 *   insn=0x00000000003A8A04 string=0x00000000005919F6 "Downloading saves from iCloud"
 *   insn=0x00000000003A8A10 string=0x00000000003A8A14 "i"
 *   insn=0x00000000003A8A14 string=0x00000000003A8A18 "h"
 *   insn=0x00000000003A8A24 string=0x00000000005993BE "."
 *   insn=0x00000000003A8A38 string=0x00000000003A8A3C "f"
 *   insn=0x00000000003A8A3C string=0x00000000003A8A40 "h"
 *   insn=0x00000000003A8A48 string=0x00000000003A8A4C "+"
 *   insn=0x00000000003A8A50 string=0x00000000003A8A54 "vz@"
 *   insn=0x00000000003A8A60 string=0x00000000003A8A64 "("
 *   insn=0x00000000003A8A64 string=0x00000000003A8A68 "_"
 *   insn=0x00000000003A8A74 string=0x00000000001F5190 "P'"
 *   insn=0x00000000003A8A80 string=0x00000000003A8A84 "\t"
 *   insn=0x00000000003A8A8C string=0x00000000001F8510 "0'"
 *   insn=0x00000000003A8A98 string=0x00000000003A8A9C ""
 *   insn=0x00000000003A8AA0 string=0x00000000003A8AA4 "a"
 *   insn=0x00000000003A8AB4 string=0x00000000003A8AB8 "`"
 *   insn=0x00000000003A8AB8 string=0x00000000003A8ABC "M"
 *   insn=0x00000000003A8ABC string=0x00000000003A8AC0 "s"
 *   insn=0x00000000003A8AC0 string=0x00000000003A8AC4 "h"
 *   insn=0x00000000003A8AEC string=0x00000000001FA5A0 "0'"
 *   insn=0x00000000003A8AF8 string=0x00000000001F8A30 "0'"
 *   insn=0x00000000003A8AFC string=0x00000000003A8B00 "3"
 *   insn=0x00000000003A8B00 string=0x00000000003A8B04 "h"
 *   insn=0x00000000003A8B04 string=0x00000000003A8B08 ""
 *   insn=0x00000000003A8B08 string=0x00000000003A8B0C "h"
 *   insn=0x00000000003A8B10 string=0x00000000003A8B14 "h"
 *   insn=0x00000000003A8B18 string=0x00000000003A8B1C "\t@"
 *   insn=0x00000000003A8B20 string=0x00000000003A8B24 "h\n@"
 *   insn=0x00000000003A8B24 string=0x00000000003A8B28 ""
 *   insn=0x00000000003A8B28 string=0x00000000003A8B2C "h\n"
 *   insn=0x00000000003A8B30 string=0x00000000003A8B34 "h"
 *   insn=0x00000000003A8B38 string=0x00000000003A8B3C "@"
 *   insn=0x00000000003A8B4C string=0x00000000003A8B50 "A"
 *   insn=0x00000000003A8B70 string=0x00000000003A8B74 ")=G"
 *   insn=0x00000000003A8B7C string=0x00000000003A8B80 "\t"
 *   insn=0x00000000003A8B7C string=0x00000000003A8B94 "\t"
 *   insn=0x00000000003A8B80 string=0x00000000003A8B84 "*"
 *   insn=0x00000000003A8B84 string=0x00000000003A8B88 "\n"
 *   insn=0x00000000003A8B90 string=0x00000000003A8BA0 "?"
 *   insn=0x00000000003A8B94 string=0x00000000003A8B98 "*"
 *   insn=0x00000000003A8B98 string=0x00000000003A8B9C "\n"
 *   insn=0x00000000003A8BA0 string=0x00000000003A8BA4 ","
 *   insn=0x00000000003A8BB8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003A8BC0 string=0x00000000003A8BC4 "@c"
 *   insn=0x00000000003A8BD8 string=0x00000000003A8BDC ""
 *   insn=0x00000000003A8BE0 string=0x00000000003A8BE4 "!"
 *   insn=0x00000000003A8BE8 string=0x00000000003A8BEC "\t@"
 *   insn=0x00000000003A8BF8 string=0x00000000003A8BFC ""
 *   insn=0x00000000003A8C00 string=0x00000000003A8C04 "!"
 *   insn=0x00000000003A8C08 string=0x00000000003A8C0C "@"
 *   insn=0x00000000003A8C24 string=0x00000000003A8C28 ")"
 *   insn=0x00000000003A8C3C string=0x00000000003A8C40 ")=G"
 *   insn=0x00000000003A8C40 string=0x00000000003A8C44 "!"
 *   insn=0x00000000003A8C44 string=0x00000000003A8C48 "i"
 *   insn=0x00000000003A8C48 string=0x00000000003A8C4C "\t"
 *   insn=0x00000000003A8C48 string=0x00000000003A8C74 "\t"
 *   insn=0x00000000003A8C4C string=0x00000000003A8C50 "*"
 *   insn=0x00000000003A8C50 string=0x00000000003A8C54 "\n"
 *   insn=0x00000000003A8C58 string=0x00000000003A8C5C "?"
 *   insn=0x00000000003A8C5C string=0x00000000003A8C60 "L"
 *   insn=0x00000000003A8C74 string=0x00000000003A8C78 "*"
 *   insn=0x00000000003A8C78 string=0x00000000003A8C7C "\n"
 *   insn=0x00000000003A8C7C string=0x00000000003A8C80 "?"
 *   insn=0x00000000003A8C80 string=0x00000000003A8C84 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ProfileManagerLoadingView::Update(Caver::ProfileManagerLoadingView *this, float a2)
{
  __int64 updated; // x0
  float v5; // s0
  int v6; // w8
  int v7; // w8
  int v8; // w21
  char *v9; // x21
  Caver::GUILabel *v10; // x22
  size_t v11; // x2
  __int64 *v12; // x20
  _QWORD *v13; // x1
  float v14; // s0
  Caver::GUIView *v15; // x19
  _QWORD *v16; // x19
  __int64 v17; // x8
  __int64 v18; // x8
  unsigned int *v19; // x8
  int v20; // w9
  void *v21; // [xsp+0h] [xbp-50h] BYREF
  _QWORD *v22; // [xsp+8h] [xbp-48h]
  __int64 v23; // [xsp+18h] [xbp-38h]

  v23 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  updated = Caver::GUIView::Update(this, a2);
  v5 = *((float *)this + 69) + a2;
  *((float *)this + 69) = v5;
  if ( v5 > 0.3 )
  {
    v6 = *((_DWORD *)this + 68);
    *((_DWORD *)this + 69) = 0;
    if ( v6 <= 3 )
      v7 = v6 + 1;
    else
      v7 = 1;
    *((_DWORD *)this + 68) = v7;
    sub_566BB8((int)&v21, "Downloading saves from iCloud");
    if ( *((int *)this + 68) >= 1 )
    {
      v8 = 0;
      do
      {
        sub_5677D4(&v21, ".", 1);
        ++v8;
      }
      while ( v8 < *((_DWORD *)this + 68) );
    }
    v9 = (char *)v21;
    v10 = (Caver::GUILabel *)*((_QWORD *)this + 30);
    v12 = (__int64 *)((char *)v21 - 24);
    v11 = *((_QWORD *)v21 - 3);
    v13 = (_QWORD *)*((_QWORD *)v10 + 32);
    if ( v11 != *(v13 - 3) || (updated = memcmp(v21, v13, v11), (_DWORD)updated) )
    {
      sub_56A6A8((char *)v10 + 256);
      updated = Caver::GUILabel::UpdateText(v10);
      v9 = (char *)v21;
      v12 = (__int64 *)((char *)v21 - 24);
    }
    if ( v12 != &qword_6FD2E0 )
    {
      v19 = (unsigned int *)(v9 - 8);
      if ( &pthread_create )
      {
        do
          v20 = __ldaxr(v19);
        while ( __stlxr(v20 - 1, v19) );
      }
      else
      {
        v20 = (*v19)--;
      }
      if ( v20 <= 0 )
        operator delete(v12);
    }
  }
  v14 = *((float *)this + 70) + a2;
  *((float *)this + 70) = v14;
  if ( v14 > 10.0 )
  {
    v15 = (Caver::GUIView *)*((_QWORD *)this + 32);
    if ( *((_BYTE *)v15 + 228) )
    {
      *((_BYTE *)v15 + 228) = 0;
      Caver::GUIAnimation::AlphaAnimation((__int64 *)&v21, (Caver::GUIAnimation *)updated, 0.0, 1.0, 0.4);
      Caver::GUIView::RemoveAllAnimations(v15);
      Caver::GUIView::AddAnimation();
      v16 = v22;
      if ( v22 )
      {
        v17 = v22[1] - 1LL;
        v22[1] = v17;
        if ( !v17 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v16 + 16LL))(v16);
          v18 = v16[2] - 1LL;
          v16[2] = v18;
          if ( !v18 )
            (*(void (__fastcall **)(_QWORD *))(*v16 + 24LL))(v16);
        }
      }
    }
  }
}

