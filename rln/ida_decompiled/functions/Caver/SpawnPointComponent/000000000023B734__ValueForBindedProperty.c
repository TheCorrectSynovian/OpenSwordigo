/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023B734
 * Mangled: _ZN5Caver19SpawnPointComponent22ValueForBindedPropertyEi
 * Demangled: Caver::SpawnPointComponent::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x00000000001F7C30  Caver::SpawnPointComponent::ValueForBindedProperty(int)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7C30  Caver::SpawnPointComponent::ValueForBindedProperty(int)
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *   0x00000000001FFD40  Caver::BindingValue::ValueWithInt(int,std::string const&)
 *   0x00000000002033B0  Caver::BindingValue::ValueWithVector3(Caver::Vector3 const&)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 38
 *   insn=0x000000000023B744 string=0x000000000023B748 "U"
 *   insn=0x000000000023B750 string=0x000000000023B754 "?"
 *   insn=0x000000000023B75C string=0x000000000023B760 "A"
 *   insn=0x000000000023B768 string=0x000000000059258D "right"
 *   insn=0x000000000023B76C string=0x000000000023B770 "5"
 *   insn=0x000000000023B76C string=0x000000000059257C "left"
 *   insn=0x000000000023B770 string=0x000000000023B774 ")"
 *   insn=0x000000000023B778 string=0x000000000023B77C "!"
 *   insn=0x000000000023B794 string=0x000000000023B798 "j"
 *   insn=0x000000000023B79C string=0x000000000023B7A0 "I%"
 *   insn=0x000000000023B7A0 string=0x000000000023B7A4 ")"
 *   insn=0x000000000023B7B0 string=0x000000000023B7B4 "I%"
 *   insn=0x000000000023B7B4 string=0x000000000023B7B8 ")=G"
 *   insn=0x000000000023B7B8 string=0x000000000023B7BC "!"
 *   insn=0x000000000023B7C0 string=0x000000000023B7C4 "\t"
 *   insn=0x000000000023B7C0 string=0x000000000023B814 "\t"
 *   insn=0x000000000023B7C4 string=0x000000000023B7C8 "*"
 *   insn=0x000000000023B7C8 string=0x000000000023B7CC "\n"
 *   insn=0x000000000023B7D4 string=0x000000000023B820 "?"
 *   insn=0x000000000023B814 string=0x000000000023B818 "*"
 *   insn=0x000000000023B818 string=0x000000000023B81C "\n"
 *   insn=0x000000000023B820 string=0x000000000023B824 "l"
 *   insn=0x000000000023B834 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000023B838 string=0x000000000023B83C "J%"
 *   insn=0x000000000023B83C string=0x000000000023B840 "J"
 *   insn=0x000000000023B844 string=0x000000000023B848 "(a"
 *   insn=0x000000000023B850 string=0x000000000023B854 "J%"
 *   insn=0x000000000023B854 string=0x000000000023B858 "J=G"
 *   insn=0x000000000023B858 string=0x000000000023B85C ")!"
 *   insn=0x000000000023B860 string=0x000000000023B864 "*"
 *   insn=0x000000000023B860 string=0x000000000023B890 "*"
 *   insn=0x000000000023B864 string=0x000000000023B868 "K"
 *   insn=0x000000000023B868 string=0x000000000023B86C "+"
 *   insn=0x000000000023B870 string=0x000000000023B874 "_"
 *   insn=0x000000000023B890 string=0x000000000023B894 "K"
 *   insn=0x000000000023B894 string=0x000000000023B898 "+"
 *   insn=0x000000000023B898 string=0x000000000023B89C "_"
 *   insn=0x000000000023B8B0 string=0x00000000001F7C30 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SpawnPointComponent::ValueForBindedProperty(
        Caver::SpawnPointComponent *this,
        const Caver::Vector3 *a2)
{
  char *v2; // x1
  void *v3; // x0
  unsigned int *v4; // x8
  int v5; // w9
  _QWORD v6[3]; // [xsp+8h] [xbp-38h] BYREF

  v6[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( (_DWORD)a2 == 1 )
  {
    Caver::BindingValue::ValueWithVector3((Caver::SpawnPointComponent *)((char *)this + 116), a2);
  }
  else if ( (_DWORD)a2 )
  {
    Caver::Component::ValueForBindedProperty(this, (int)a2);
  }
  else
  {
    if ( *((int *)this + 28) >= 0 )
      v2 = "right";
    else
      v2 = "left";
    sub_566BB8((int)v6, v2);
    Caver::BindingValue::ValueWithInt();
    v3 = (void *)(v6[0] - 24LL);
    if ( (__int64 *)(v6[0] - 24LL) != &qword_6FD2E0 )
    {
      v4 = (unsigned int *)(v6[0] - 8LL);
      if ( &pthread_create )
      {
        do
          v5 = __ldaxr(v4);
        while ( __stlxr(v5 - 1, v4) );
      }
      else
      {
        v5 = (*v4)--;
      }
      if ( v5 <= 0 )
        operator delete(v3);
    }
  }
}

