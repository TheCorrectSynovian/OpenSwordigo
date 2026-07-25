/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003E3FAC
 * Mangled: _ZN5Caver11TargetFrame16UpdateHealthTextEv
 * Demangled: Caver::TargetFrame::UpdateHealthText(void)
 *
 * Callers: 1
 *   0x00000000001FB480  Caver::TargetFrame::UpdateHealthText(void)
 *
 * Callees: 11
 *   0x00000000001F5200  Caver::FontText::Clear(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7E80  Caver::FontText::Translate(Caver::Vector2 const&)
 *   0x00000000001F9CD0  Caver::FontText::AddText(std::string const&,float,Caver::Vector2 const&)
 *   0x0000000000200F70  boost::detail::lcast_put_unsigned<std::char_traits<char>,uint,char>(uint,char *)
 *   0x00000000005677D4  sub_5677D4
 *   0x0000000000569E1C  sub_569E1C
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 88
 *   insn=0x00000000003E3FC4 string=0x00000000003E3FC8 "W"
 *   insn=0x00000000003E3FE0 string=0x00000000003E3FE4 "("
 *   insn=0x00000000003E3FE0 string=0x00000000001F5200 "P'"
 *   insn=0x00000000003E4000 string=0x00000000003E4004 "?"
 *   insn=0x00000000003E4004 string=0x00000000003E4008 "5Q"
 *   insn=0x00000000003E400C string=0x00000000003E4010 " W"
 *   insn=0x00000000003E4028 string=0x00000000003E402C "\t"
 *   insn=0x00000000003E4044 string=0x00000000003E4048 "u"
 *   insn=0x00000000003E4050 string=0x00000000003E4054 "5"
 *   insn=0x00000000003E4054 string=0x00000000003E4058 "a"
 *   insn=0x00000000003E4058 string=0x0000000000590C08 "%"
 *   insn=0x00000000003E4080 string=0x00000000001F9CD0 "0'"
 *   insn=0x00000000003E4090 string=0x00000000003E410C "\t"
 *   insn=0x00000000003E40A0 string=0x00000000003E4130 "\t"
 *   insn=0x00000000003E40B4 string=0x00000000003E40B8 "`( "
 *   insn=0x00000000003E40BC string=0x00000000003E40C0 "B($"
 *   insn=0x00000000003E40D8 string=0x00000000003E40DC "iO"
 *   insn=0x00000000003E40DC string=0x00000000001F7E80 "0'"
 *   insn=0x00000000003E40E8 string=0x00000000003E40EC "A"
 *   insn=0x00000000003E40EC string=0x00000000003E4194 "OH"
 *   insn=0x00000000003E410C string=0x00000000003E4110 ")=G"
 *   insn=0x00000000003E4110 string=0x00000000003E4114 "!"
 *   insn=0x00000000003E4118 string=0x00000000003E411C "\t"
 *   insn=0x00000000003E4118 string=0x00000000003E4154 "\t"
 *   insn=0x00000000003E411C string=0x00000000003E4120 "*"
 *   insn=0x00000000003E4120 string=0x00000000003E4124 "\n"
 *   insn=0x00000000003E4128 string=0x00000000003E412C ""
 *   insn=0x00000000003E412C string=0x00000000003E4160 "?"
 *   insn=0x00000000003E4130 string=0x00000000003E4134 ")=G"
 *   insn=0x00000000003E4134 string=0x00000000003E4138 "!"
 *   insn=0x00000000003E413C string=0x00000000003E4140 "\t"
 *   insn=0x00000000003E413C string=0x00000000003E4174 "\t"
 *   insn=0x00000000003E4140 string=0x00000000003E4144 "*"
 *   insn=0x00000000003E4144 string=0x00000000003E4148 "\n"
 *   insn=0x00000000003E4150 string=0x00000000003E4180 "?"
 *   insn=0x00000000003E4154 string=0x00000000003E4158 "*"
 *   insn=0x00000000003E4158 string=0x00000000003E415C "\n"
 *   insn=0x00000000003E4174 string=0x00000000003E4178 "*"
 *   insn=0x00000000003E4178 string=0x00000000003E417C "\n"
 *   insn=0x00000000003E4194 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003E419C string=0x00000000003E41A0 "(a"
 *   insn=0x00000000003E41A4 string=0x00000000003E41A8 "@"
 *   insn=0x00000000003E41A8 string=0x00000000003E41AC "\n"
 *   insn=0x00000000003E41AC string=0x00000000003E41B0 "J=G"
 *   insn=0x00000000003E41B0 string=0x00000000003E41B4 ")!"
 *   insn=0x00000000003E41B8 string=0x00000000003E41BC "*"
 *   insn=0x00000000003E41B8 string=0x00000000003E4208 "*"
 *   insn=0x00000000003E41BC string=0x00000000003E41C0 "K"
 *   insn=0x00000000003E41C0 string=0x00000000003E41C4 "+"
 *   insn=0x00000000003E41CC string=0x00000000003E4214 "_"
 *   insn=0x00000000003E41D4 string=0x00000000003E41D8 "(a"
 *   insn=0x00000000003E41E0 string=0x00000000003E41E4 "\n"
 *   insn=0x00000000003E41E4 string=0x00000000003E41E8 "J=G"
 *   insn=0x00000000003E41E8 string=0x00000000003E41EC ")!"
 *   insn=0x00000000003E41F0 string=0x00000000003E41F4 "*"
 *   insn=0x00000000003E41F4 string=0x00000000003E41F8 "K"
 *   insn=0x00000000003E41F8 string=0x00000000003E41FC "+"
 *   insn=0x00000000003E4208 string=0x00000000003E420C "K"
 *   insn=0x00000000003E420C string=0x00000000003E4210 "+"
 *   insn=0x00000000003E4220 string=0x00000000003E4224 "`"
 *   insn=0x00000000003E423C string=0x00000000003E4240 "\t"
 *   insn=0x00000000003E4240 string=0x00000000003E4244 ")=G"
 *   insn=0x00000000003E4244 string=0x00000000003E4248 "!"
 *   insn=0x00000000003E4248 string=0x00000000003E424C ")"
 *   insn=0x00000000003E424C string=0x00000000003E4250 "\t"
 *   insn=0x00000000003E424C string=0x00000000003E4270 "\t"
 *   insn=0x00000000003E4250 string=0x00000000003E4254 "*"
 *   insn=0x00000000003E4254 string=0x00000000003E4258 "\n"
 *   insn=0x00000000003E425C string=0x00000000003E4260 "?"
 *   insn=0x00000000003E4260 string=0x00000000003E4264 "l"
 *   insn=0x00000000003E426C string=0x00000000003E42CC "6"
 *   insn=0x00000000003E4270 string=0x00000000003E4274 "*"
 *   insn=0x00000000003E4274 string=0x00000000003E4278 "\n"
 *   insn=0x00000000003E4278 string=0x00000000003E427C "?"
 *   insn=0x00000000003E427C string=0x00000000003E4280 "M"
 *   insn=0x00000000003E428C string=0x00000000003E4290 "(a"
 *   insn=0x00000000003E4298 string=0x00000000003E429C "\n"
 *   insn=0x00000000003E429C string=0x00000000003E42A0 "J=G"
 *   insn=0x00000000003E42A0 string=0x00000000003E42A4 ")!"
 *   insn=0x00000000003E42A8 string=0x00000000003E42AC "*"
 *   insn=0x00000000003E42A8 string=0x00000000003E42D8 "*"
 *   insn=0x00000000003E42AC string=0x00000000003E42B0 "K"
 *   insn=0x00000000003E42B0 string=0x00000000003E42B4 "+"
 *   insn=0x00000000003E42B8 string=0x00000000003E42BC "_"
 *   insn=0x00000000003E42D0 string=0x00000000003E42D4 "|u"
 *   insn=0x00000000003E42D8 string=0x00000000003E42DC "K"
 *   insn=0x00000000003E42DC string=0x00000000003E42E0 "+"
 *   insn=0x00000000003E42E0 string=0x00000000003E42E4 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::TargetFrame::UpdateHealthText(Caver::TargetFrame *this)
{
  unsigned int v2; // w25
  char *v3; // x24
  __int64 v4; // x0
  __int64 v5; // x8
  void *v6; // x0
  char *v7; // x0
  float v8; // s5
  unsigned int *v9; // x8
  int v10; // w9
  unsigned int *v11; // x8
  int v12; // w9
  char *v13; // [xsp+8h] [xbp-78h] BYREF
  __int64 v14; // [xsp+10h] [xbp-70h] BYREF
  float v15[5]; // [xsp+20h] [xbp-60h]
  _BYTE v16[12]; // [xsp+34h] [xbp-4Ch] BYREF

  *(_QWORD *)&v16[4] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::FontText::Clear((Caver::TargetFrame *)((char *)this + 528));
  v2 = vcvtps_s32_f32(*((float *)this + 66) * 100.0);
  v3 = &byte_6FD2F8;
  v13 = &byte_6FD2F8;
  v4 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned int,char>();
  v5 = v4;
  if ( (v2 & 0x80000000) != 0 )
  {
    *(_BYTE *)(v4 - 1) = 45;
    v5 = v4 - 1;
    v3 = v13;
  }
  sub_569E1C(&v13, 0, *((_QWORD *)v3 - 3), v5, &v16[-v5]);
  sub_56A528(&v14, &v13);
  sub_5677D4(&v14, "%", 1);
  *(_QWORD *)v15 = 0;
  Caver::FontText::AddText();
  v6 = (void *)(v14 - 24);
  if ( (__int64 *)(v14 - 24) != &qword_6FD2E0 )
  {
    v9 = (unsigned int *)(v14 - 8);
    if ( &pthread_create )
    {
      do
        v10 = __ldaxr(v9);
      while ( __stlxr(v10 - 1, v9) );
    }
    else
    {
      v10 = (*v9)--;
    }
    if ( v10 <= 0 )
      operator delete(v6);
  }
  v7 = v13 - 24;
  if ( v13 - 24 != (char *)&qword_6FD2E0 )
  {
    v11 = (unsigned int *)(v13 - 8);
    if ( &pthread_create )
    {
      do
        v12 = __ldaxr(v11);
      while ( __stlxr(v12 - 1, v11) );
    }
    else
    {
      v12 = (*v11)--;
    }
    if ( v12 <= 0 )
      operator delete(v7);
  }
  v8 = *((float *)this + 34);
  v15[0] = (float)((float)(*((float *)this + 33) + *((float *)this + 35)) + -10.0)
         - (float)(*((float *)this + 148) + *((float *)this + 150));
  v15[1] = v8 + 8.0;
  Caver::FontText::Translate();
}

