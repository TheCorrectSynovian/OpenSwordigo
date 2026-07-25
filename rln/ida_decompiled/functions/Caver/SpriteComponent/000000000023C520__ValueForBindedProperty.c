/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023C520
 * Mangled: _ZN5Caver15SpriteComponent22ValueForBindedPropertyEi
 * Demangled: Caver::SpriteComponent::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x0000000000202890  Caver::SpriteComponent::ValueForBindedProperty(int)
 *
 * Callees: 6
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000200540  Caver::BindingValue::ValueWithString(std::string const&)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 33
 *   insn=0x000000000023C530 string=0x000000000023C534 "T"
 *   insn=0x000000000023C544 string=0x000000000023C558 "U%"
 *   insn=0x000000000023C564 string=0x000000000023C568 "<@"
 *   insn=0x000000000023C568 string=0x000000000023C56C ""
 *   insn=0x000000000023C578 string=0x000000000023C57C "K"
 *   insn=0x000000000023C594 string=0x000000000023C598 "A"
 *   insn=0x000000000023C598 string=0x000000000023C5C0 "I%"
 *   insn=0x000000000023C5A8 string=0x000000000023C604 "3"
 *   insn=0x000000000023C5C0 string=0x000000000023C5C4 ")=G"
 *   insn=0x000000000023C5C4 string=0x000000000023C5C8 "!"
 *   insn=0x000000000023C5CC string=0x000000000023C5D0 "\t"
 *   insn=0x000000000023C5CC string=0x000000000023C5E4 "\t"
 *   insn=0x000000000023C5D0 string=0x000000000023C5D4 "*"
 *   insn=0x000000000023C5D4 string=0x000000000023C5D8 "\n"
 *   insn=0x000000000023C5E0 string=0x000000000023C5F0 "?"
 *   insn=0x000000000023C5E4 string=0x000000000023C5E8 "*"
 *   insn=0x000000000023C5E8 string=0x000000000023C5EC "\n"
 *   insn=0x000000000023C5F0 string=0x000000000023C5F4 "L"
 *   insn=0x000000000023C5F8 string=0x000000000023C5FC "j"
 *   insn=0x000000000023C604 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000023C60C string=0x000000000023C610 "(a"
 *   insn=0x000000000023C618 string=0x000000000023C61C "J%"
 *   insn=0x000000000023C61C string=0x000000000023C620 "J=G"
 *   insn=0x000000000023C620 string=0x000000000023C624 ")!"
 *   insn=0x000000000023C628 string=0x000000000023C62C "*"
 *   insn=0x000000000023C628 string=0x000000000023C658 "*"
 *   insn=0x000000000023C62C string=0x000000000023C630 "K"
 *   insn=0x000000000023C630 string=0x000000000023C634 "+"
 *   insn=0x000000000023C638 string=0x000000000023C63C "_"
 *   insn=0x000000000023C648 string=0x000000000023C64C "V"
 *   insn=0x000000000023C658 string=0x000000000023C65C "K"
 *   insn=0x000000000023C65C string=0x000000000023C660 "+"
 *   insn=0x000000000023C660 string=0x000000000023C664 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall Caver::SpriteComponent::ValueForBindedProperty(
        Caver::SpriteComponent *this@<X0>,
        int a2@<W1>,
        __int64 a3@<X8>)
{
  void *v3; // x0
  unsigned int *v4; // x8
  int v5; // w9
  _QWORD v6[3]; // [xsp+8h] [xbp-38h] BYREF

  v6[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a2 )
  {
    *(_DWORD *)a3 = 0;
    *(_QWORD *)(a3 + 24) = 0;
    *(_QWORD *)(a3 + 32) = 0;
    *(_QWORD *)(a3 + 8) = 0;
    *(_QWORD *)(a3 + 16) = 0;
  }
  else
  {
    v6[0] = &byte_6FD2F8;
    if ( **((_QWORD **)this + 15) )
      sub_56A6A8(v6);
    Caver::BindingValue::ValueWithString();
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

