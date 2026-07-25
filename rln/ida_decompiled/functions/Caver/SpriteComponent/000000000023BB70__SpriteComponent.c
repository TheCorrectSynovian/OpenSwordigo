/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023BB70
 * Mangled: _ZN5Caver15SpriteComponentC2Ev
 * Demangled: Caver::SpriteComponent::SpriteComponent(void)
 *
 * Callers: 2
 *   0x00000000001F4360  Caver::SpriteComponent::SpriteComponent(void)
 *   0x00000000001F5130  Caver::SpriteComponent::SpriteComponent(void)
 *
 * Callees: 10
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x00000000001FCB10  boost::detail::shared_count::shared_count<Caver::Sprite>(Caver::Sprite *)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 51
 *   insn=0x000000000023BB80 string=0x000000000023BB84 "H%"
 *   insn=0x000000000023BB84 string=0x000000000023BB88 "U"
 *   insn=0x000000000023BB88 string=0x000000000023BB8C ""
 *   insn=0x000000000023BB8C string=0x000000000023BB90 "V%"
 *   insn=0x000000000023BB98 string=0x000000000023BB9C "\n"
 *   insn=0x000000000023BBA0 string=0x000000000023BBA4 "@"
 *   insn=0x000000000023BBA4 string=0x000000000023BBA8 "\n"
 *   insn=0x000000000023BBA8 string=0x000000000023BBAC "@"
 *   insn=0x000000000023BBB8 string=0x000000000023BBBC "A"
 *   insn=0x000000000023BBC8 string=0x000000000023BBCC "i"
 *   insn=0x000000000023BBD0 string=0x000000000023BBD4 "_"
 *   insn=0x000000000023BBD4 string=0x000000000023BBD8 "h"
 *   insn=0x000000000023BBD8 string=0x000000000023BBDC "`"
 *   insn=0x000000000023BBE8 string=0x000000000023BBEC "j2"
 *   insn=0x000000000023BBF4 string=0x000000000023BBF8 "z"
 *   insn=0x000000000023BBF8 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000023BC2C string=0x00000000001FCB10 "0'"
 *   insn=0x000000000023BC38 string=0x000000000023BC3C "E"
 *   insn=0x000000000023BC3C string=0x000000000023BC40 "h"
 *   insn=0x000000000023BC4C string=0x000000000023BC50 "i"
 *   insn=0x000000000023BC54 string=0x000000000023BC58 "4"
 *   insn=0x000000000023BC5C string=0x000000000023BC60 ""
 *   insn=0x000000000023BC6C string=0x000000000023BC70 "\t@"
 *   insn=0x000000000023BC7C string=0x000000000023BC80 ""
 *   insn=0x000000000023BC8C string=0x000000000023BC90 "@"
 *   insn=0x000000000023BCC0 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000023BCC8 string=0x000000000023BCCC "5"
 *   insn=0x000000000023BCCC string=0x000000000023BD10 "h:@"
 *   insn=0x000000000023BCD0 string=0x000000000023BCD4 ""
 *   insn=0x000000000023BCE0 string=0x000000000023BCE4 "\t@"
 *   insn=0x000000000023BCF0 string=0x000000000023BCF4 ""
 *   insn=0x000000000023BD00 string=0x000000000023BD04 "@"
 *   insn=0x000000000023BD1C string=0x000000000023BD20 "I%"
 *   insn=0x000000000023BD20 string=0x000000000023BD24 ")=G"
 *   insn=0x000000000023BD24 string=0x000000000023BD28 "!"
 *   insn=0x000000000023BD2C string=0x000000000023BD30 "\t"
 *   insn=0x000000000023BD2C string=0x000000000023BD60 "\t"
 *   insn=0x000000000023BD30 string=0x000000000023BD34 "*"
 *   insn=0x000000000023BD34 string=0x000000000023BD38 "\n"
 *   insn=0x000000000023BD3C string=0x000000000023BD40 "?"
 *   insn=0x000000000023BD40 string=0x000000000023BD44 "l"
 *   insn=0x000000000023BD54 string=0x00000000001FA4D0 "0'"
 *   insn=0x000000000023BD60 string=0x000000000023BD64 "*"
 *   insn=0x000000000023BD64 string=0x000000000023BD68 "\n"
 *   insn=0x000000000023BD68 string=0x000000000023BD6C "?"
 *   insn=0x000000000023BD88 string=0x000000000023BD8C "h"@"
 *   insn=0x000000000023BD90 string=0x000000000023BD94 "a"
 *   insn=0x000000000023BD9C string=0x000000000023BDA0 "B"
 *   insn=0x000000000023BDA0 string=0x000000000023BDA4 "a"
 *   insn=0x000000000023BDA8 string=0x000000000023BDAC "?"
 *   insn=0x000000000023BDAC string=0x000000000023BDB0 "hbB9"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SpriteComponent::SpriteComponent(Caver::SpriteComponent *this)
{
  __int128 v2; // q0
  __int64 v3; // x0
  _QWORD *v4; // x20
  __int64 v5; // x8
  __int64 v6; // x8
  __int64 v7; // [xsp+28h] [xbp-38h]
  __int64 v8; // [xsp+30h] [xbp-30h]

  *(_QWORD *)&v2 = &off_6BBC68;
  *((_QWORD *)&v2 + 1) = &off_6BBCA8;
  _ReadStatusReg(TPIDR_EL0);
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0;
  *((_BYTE *)this + 48) = 0;
  *((_QWORD *)this + 7) = &byte_6FD2F8;
  *((_QWORD *)this + 13) = 0;
  *((_QWORD *)this + 14) = &byte_6FD2F8;
  *((_QWORD *)this + 9) = 0;
  *(_QWORD *)this = off_6BBB50;
  *((_OWORD *)this + 1) = v2;
  *((_QWORD *)this + 17) = 0;
  *((_QWORD *)this + 18) = 0;
  *((_QWORD *)this + 15) = 0;
  *((_QWORD *)this + 16) = 0;
  *((_QWORD *)this + 10) = 0;
  *((_QWORD *)this + 11) = (char *)this + 72;
  *((_QWORD *)this + 12) = (char *)this + 72;
  *((_BYTE *)this + 152) = 0;
  v3 = operator new(0x58u);
  *(_DWORD *)(v3 + 48) = 0;
  *(_BYTE *)(v3 + 80) = 0;
  *(_QWORD *)(v3 + 56) = 0;
  v7 = v3;
  *(_OWORD *)(v3 + 16) = 0u;
  *(_OWORD *)(v3 + 32) = 0u;
  *(_OWORD *)v3 = 0u;
  *(_OWORD *)(v3 + 64) = 0u;
  boost::detail::shared_count::shared_count<Caver::Sprite>();
  boost::detail::sp_enable_shared_from_this();
  v4 = (_QWORD *)*((_QWORD *)this + 16);
  *((_QWORD *)this + 15) = v7;
  *((_QWORD *)this + 16) = v8;
  if ( v4 )
  {
    v5 = v4[1] - 1LL;
    v4[1] = v5;
    if ( !v5 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
      v6 = v4[2] - 1LL;
      v4[2] = v6;
      if ( !v6 )
        (*(void (__fastcall **)(_QWORD *))(*v4 + 24LL))(v4);
    }
  }
}

