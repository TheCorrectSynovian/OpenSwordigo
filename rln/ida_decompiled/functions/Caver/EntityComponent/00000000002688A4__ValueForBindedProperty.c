/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002688A4
 * Mangled: _ZN5Caver15EntityComponent22ValueForBindedPropertyEi
 * Demangled: Caver::EntityComponent::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x0000000000202610  Caver::EntityComponent::ValueForBindedProperty(int)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FE4F0  Caver::BindingValue::ValueWithBool(bool)
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *   0x00000000001FFD40  Caver::BindingValue::ValueWithInt(int,std::string const&)
 *   0x0000000000268B68  `non-virtual thunk to'Caver::EntityComponent::ValueForBindedProperty(int)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 75
 *   insn=0x00000000002688B0 string=0x00000000002688B4 "T"
 *   insn=0x00000000002688BC string=0x00000000002688C0 "?"
 *   insn=0x00000000002688C8 string=0x00000000002688CC "A"
 *   insn=0x00000000002688CC string=0x00000000002688D0 "p@"
 *   insn=0x00000000002688D4 string=0x00000000002688D8 "@"
 *   insn=0x00000000002688D8 string=0x0000000000268960 "A"
 *   insn=0x00000000002688E0 string=0x00000000002688E4 "A"
 *   insn=0x00000000002688E4 string=0x000000000059258D "right"
 *   insn=0x000000000026890C string=0x0000000000268910 ")"
 *   insn=0x0000000000268920 string=0x0000000000268924 ")=G"
 *   insn=0x0000000000268924 string=0x0000000000268928 "!"
 *   insn=0x000000000026892C string=0x0000000000268930 "\t"
 *   insn=0x000000000026892C string=0x0000000000268A40 "\t"
 *   insn=0x0000000000268930 string=0x0000000000268934 "*"
 *   insn=0x0000000000268934 string=0x0000000000268938 "\n"
 *   insn=0x000000000026893C string=0x0000000000268940 "C"
 *   insn=0x0000000000268940 string=0x0000000000268A4C "?"
 *   insn=0x000000000026894C string=0x0000000000268950 "+"
 *   insn=0x0000000000268954 string=0x0000000000268958 "^Y"
 *   insn=0x0000000000268958 string=0x000000000026895C "("
 *   insn=0x0000000000268960 string=0x000000000059257C "left"
 *   insn=0x0000000000268988 string=0x000000000026898C ")"
 *   insn=0x0000000000268994 string=0x0000000000268998 " "
 *   insn=0x000000000026899C string=0x00000000002689A0 ")=G"
 *   insn=0x00000000002689A0 string=0x00000000002689A4 "!"
 *   insn=0x00000000002689A8 string=0x00000000002689AC "\t"
 *   insn=0x00000000002689AC string=0x00000000002689B0 "*"
 *   insn=0x00000000002689B0 string=0x00000000002689B4 "\n"
 *   insn=0x00000000002689B8 string=0x00000000002689BC "$"
 *   insn=0x00000000002689C0 string=0x0000000000583F97 "unknown"
 *   insn=0x00000000002689CC string=0x00000000002689D0 "z"
 *   insn=0x00000000002689E8 string=0x00000000002689EC ")"
 *   insn=0x00000000002689F4 string=0x00000000002689F8 "!"
 *   insn=0x0000000000268A1C string=0x0000000000268A20 ")=G"
 *   insn=0x0000000000268A20 string=0x0000000000268A24 "!"
 *   insn=0x0000000000268A28 string=0x0000000000268A2C "\t"
 *   insn=0x0000000000268A2C string=0x0000000000268A30 "*"
 *   insn=0x0000000000268A30 string=0x0000000000268A34 "\n"
 *   insn=0x0000000000268A40 string=0x0000000000268A44 "*"
 *   insn=0x0000000000268A44 string=0x0000000000268A48 "\n"
 *   insn=0x0000000000268A4C string=0x0000000000268A50 "l"
 *   insn=0x0000000000268A54 string=0x0000000000268A58 "S"
 *   insn=0x0000000000268A60 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000268A68 string=0x0000000000268A6C "J"
 *   insn=0x0000000000268A70 string=0x0000000000268A74 "(a"
 *   insn=0x0000000000268A78 string=0x0000000000268A7C " "
 *   insn=0x0000000000268A80 string=0x0000000000268A84 "J=G"
 *   insn=0x0000000000268A84 string=0x0000000000268A88 ")!"
 *   insn=0x0000000000268A8C string=0x0000000000268A90 "*"
 *   insn=0x0000000000268A8C string=0x0000000000268B3C "*"
 *   insn=0x0000000000268A90 string=0x0000000000268A94 "K"
 *   insn=0x0000000000268A94 string=0x0000000000268A98 "+"
 *   insn=0x0000000000268A9C string=0x0000000000268AA0 " "
 *   insn=0x0000000000268AA0 string=0x0000000000268B20 "_"
 *   insn=0x0000000000268AA8 string=0x0000000000268AAC "J"
 *   insn=0x0000000000268AB0 string=0x0000000000268AB4 "(a"
 *   insn=0x0000000000268AB8 string=0x0000000000268ABC " "
 *   insn=0x0000000000268AC0 string=0x0000000000268AC4 "J=G"
 *   insn=0x0000000000268AC4 string=0x0000000000268AC8 ")!"
 *   insn=0x0000000000268ACC string=0x0000000000268AD0 "*"
 *   insn=0x0000000000268AD0 string=0x0000000000268AD4 "K"
 *   insn=0x0000000000268AD4 string=0x0000000000268AD8 "+"
 *   insn=0x0000000000268AE8 string=0x0000000000268AEC "J"
 *   insn=0x0000000000268AF0 string=0x0000000000268AF4 "(a"
 *   insn=0x0000000000268AF8 string=0x0000000000268AFC " "
 *   insn=0x0000000000268B00 string=0x0000000000268B04 "J=G"
 *   insn=0x0000000000268B04 string=0x0000000000268B08 ")!"
 *   insn=0x0000000000268B0C string=0x0000000000268B10 "*"
 *   insn=0x0000000000268B10 string=0x0000000000268B14 "K"
 *   insn=0x0000000000268B14 string=0x0000000000268B18 "+"
 *   insn=0x0000000000268B34 string=0x0000000000268B38 "cc"
 *   insn=0x0000000000268B3C string=0x0000000000268B40 "K"
 *   insn=0x0000000000268B40 string=0x0000000000268B44 "+"
 *   insn=0x0000000000268B44 string=0x0000000000268B48 "_"
 *   insn=0x0000000000268B60 string=0x0000000000268B64 "Xc"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::EntityComponent::ValueForBindedProperty(Caver::EntityComponent *this, int a2)
{
  int v2; // w8
  void *v3; // x0
  unsigned int *v4; // x8
  int v5; // w9
  _QWORD v6[3]; // [xsp+8h] [xbp-28h] BYREF

  v6[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a2 == 1 )
  {
    Caver::BindingValue::ValueWithBool((Caver::BindingValue *)*((unsigned __int8 *)this + 236), 1);
    return;
  }
  if ( a2 )
  {
    Caver::Component::ValueForBindedProperty(this, a2);
    return;
  }
  v2 = *((_DWORD *)this + 28);
  if ( v2 == -1 )
  {
    sub_566BB8((int)v6, "left");
    Caver::BindingValue::ValueWithInt();
    v3 = (void *)(v6[0] - 24LL);
    if ( (__int64 *)(v6[0] - 24LL) == &qword_6FD2E0 )
      return;
    v4 = (unsigned int *)(v6[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v5 = __ldaxr(v4);
      while ( __stlxr(v5 - 1, v4) );
      goto LABEL_21;
    }
  }
  else if ( v2 == 1 )
  {
    sub_566BB8((int)v6, "right");
    Caver::BindingValue::ValueWithInt();
    v3 = (void *)(v6[0] - 24LL);
    if ( (__int64 *)(v6[0] - 24LL) == &qword_6FD2E0 )
      return;
    v4 = (unsigned int *)(v6[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v5 = __ldaxr(v4);
      while ( __stlxr(v5 - 1, v4) );
      goto LABEL_21;
    }
  }
  else
  {
    sub_566BB8((int)v6, "unknown");
    Caver::BindingValue::ValueWithInt();
    v3 = (void *)(v6[0] - 24LL);
    if ( (__int64 *)(v6[0] - 24LL) == &qword_6FD2E0 )
      return;
    v4 = (unsigned int *)(v6[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v5 = __ldaxr(v4);
      while ( __stlxr(v5 - 1, v4) );
      goto LABEL_21;
    }
  }
  v5 = (*v4)--;
LABEL_21:
  if ( v5 <= 0 )
    operator delete(v3);
}

