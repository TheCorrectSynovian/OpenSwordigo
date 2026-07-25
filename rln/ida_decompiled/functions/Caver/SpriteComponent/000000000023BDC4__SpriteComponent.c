/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023BDC4
 * Mangled: _ZN5Caver15SpriteComponentC2ERKN5boost13intrusive_ptrINS_7TextureEEE
 * Demangled: Caver::SpriteComponent::SpriteComponent(boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callers: 0
 *
 * Callees: 12
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F73A0  Caver::Component::UpdateObjectBounds(void)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x00000000001FCB10  boost::detail::shared_count::shared_count<Caver::Sprite>(Caver::Sprite *)
 *   0x00000000001FD5B0  Caver::Sprite::InitWithTexture(boost::intrusive_ptr<Caver::Texture> const&,Caver::Rectangle const&)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 58
 *   insn=0x000000000023BDDC string=0x000000000023BDE0 "H%"
 *   insn=0x000000000023BDE0 string=0x000000000023BDE4 "X"
 *   insn=0x000000000023BDE4 string=0x000000000023BDE8 ""
 *   insn=0x000000000023BDE8 string=0x000000000023BDEC "W%"
 *   insn=0x000000000023BDEC string=0x000000000023BDF0 "\t"
 *   insn=0x000000000023BDF4 string=0x000000000023BDF8 "\n"
 *   insn=0x000000000023BDFC string=0x000000000023BE00 "@"
 *   insn=0x000000000023BE00 string=0x000000000023BE04 "\n"
 *   insn=0x000000000023BE04 string=0x000000000023BE08 "@"
 *   insn=0x000000000023BE14 string=0x000000000023BE18 "A"
 *   insn=0x000000000023BE24 string=0x000000000023BE28 "i"
 *   insn=0x000000000023BE28 string=0x000000000023BE2C "_"
 *   insn=0x000000000023BE38 string=0x000000000023BE3C "h"
 *   insn=0x000000000023BE3C string=0x000000000023BE40 "j"
 *   insn=0x000000000023BE48 string=0x000000000023BE4C "`"
 *   insn=0x000000000023BE50 string=0x000000000023BE54 "?"
 *   insn=0x000000000023BE68 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000023BE9C string=0x00000000001FCB10 "0'"
 *   insn=0x000000000023BEAC string=0x000000000023BEB0 "h"
 *   insn=0x000000000023BEBC string=0x000000000023BEC0 "i"
 *   insn=0x000000000023BEC4 string=0x000000000023BEC8 "6"
 *   insn=0x000000000023BECC string=0x000000000023BED0 ""
 *   insn=0x000000000023BEDC string=0x000000000023BEE0 "\t@"
 *   insn=0x000000000023BEEC string=0x000000000023BEF0 ""
 *   insn=0x000000000023BEFC string=0x000000000023BF00 "@"
 *   insn=0x000000000023BF10 string=0x000000000023BF48 ""
 *   insn=0x000000000023BF1C string=0x000000000023BF20 "`>@"
 *   insn=0x000000000023BF30 string=0x000000000023BF34 "h>@"
 *   insn=0x000000000023BF30 string=0x00000000001FD5B0 "0'"
 *   insn=0x000000000023BF38 string=0x000000000023BF3C " "
 *   insn=0x000000000023BF44 string=0x00000000001F73A0 "0'"
 *   insn=0x000000000023BF74 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000023BF7C string=0x000000000023BF80 "6"
 *   insn=0x000000000023BF84 string=0x000000000023BF88 ""
 *   insn=0x000000000023BF94 string=0x000000000023BF98 "\t@"
 *   insn=0x000000000023BFA4 string=0x000000000023BFA8 ""
 *   insn=0x000000000023BFB4 string=0x000000000023BFB8 "@"
 *   insn=0x000000000023BFD0 string=0x000000000023BFD4 "I%"
 *   insn=0x000000000023BFD4 string=0x000000000023BFD8 ")=G"
 *   insn=0x000000000023BFD8 string=0x000000000023BFDC "!"
 *   insn=0x000000000023BFE0 string=0x000000000023BFE4 "\t"
 *   insn=0x000000000023BFE0 string=0x000000000023C014 "\t"
 *   insn=0x000000000023BFE4 string=0x000000000023BFE8 "*"
 *   insn=0x000000000023BFE8 string=0x000000000023BFEC "\n"
 *   insn=0x000000000023BFF0 string=0x000000000023BFF4 "?"
 *   insn=0x000000000023BFF4 string=0x000000000023BFF8 "l"
 *   insn=0x000000000023C004 string=0x000000000023C008 "2"
 *   insn=0x000000000023C008 string=0x00000000001FA4D0 "0'"
 *   insn=0x000000000023C00C string=0x000000000023C010 "-"
 *   insn=0x000000000023C014 string=0x000000000023C018 "*"
 *   insn=0x000000000023C018 string=0x000000000023C01C "\n"
 *   insn=0x000000000023C01C string=0x000000000023C020 "?"
 *   insn=0x000000000023C040 string=0x000000000023C044 "U"
 *   insn=0x000000000023C060 string=0x000000000023C064 "`"
 *   insn=0x000000000023C068 string=0x000000000023C06C "`>@"
 *   insn=0x000000000023C078 string=0x000000000023C07C "M"
 *   insn=0x000000000023C07C string=0x000000000023C080 "h>@"
 *   insn=0x000000000023C088 string=0x000000000023C08C "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SpriteComponent::SpriteComponent(__int64 a1, _QWORD *a2)
{
  __int128 v3; // q0
  __int64 v5; // x20
  _OWORD *v6; // x25
  __int64 v7; // x0
  _QWORD *v8; // x22
  __int64 v9; // x8
  __int64 v10; // x8
  __int64 v11; // [xsp+50h] [xbp-58h]
  __int64 v12; // [xsp+58h] [xbp-50h]

  *(_QWORD *)&v3 = &off_6BBC68;
  *((_QWORD *)&v3 + 1) = &off_6BBCA8;
  _ReadStatusReg(TPIDR_EL0);
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_BYTE *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = &byte_6FD2F8;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)a1 = off_6BBB50;
  *(_QWORD *)(a1 + 88) = a1 + 72;
  *(_QWORD *)(a1 + 96) = a1 + 72;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  *(_OWORD *)(a1 + 16) = v3;
  *(_QWORD *)(a1 + 112) = &byte_6FD2F8;
  v5 = a1 + 112;
  *(_QWORD *)(a1 + 136) = 0;
  v6 = (_OWORD *)(a1 + 136);
  *(_QWORD *)(a1 + 144) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 128) = 0;
  *(_BYTE *)(a1 + 152) = 0;
  v7 = operator new(0x58u);
  *(_DWORD *)(v7 + 48) = 0;
  *(_BYTE *)(v7 + 80) = 0;
  *(_QWORD *)(v7 + 56) = 0;
  v11 = v7;
  *(_OWORD *)(v7 + 16) = 0u;
  *(_OWORD *)(v7 + 32) = 0u;
  *(_OWORD *)v7 = 0u;
  *(_OWORD *)(v7 + 64) = 0u;
  boost::detail::shared_count::shared_count<Caver::Sprite>();
  boost::detail::sp_enable_shared_from_this();
  v8 = *(_QWORD **)(a1 + 128);
  *(_QWORD *)(a1 + 120) = v11;
  *(_QWORD *)(a1 + 128) = v12;
  if ( v8 )
  {
    v9 = v8[1] - 1LL;
    v8[1] = v9;
    if ( !v9 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
      v10 = v8[2] - 1LL;
      v8[2] = v10;
      if ( !v10 )
        (*(void (__fastcall **)(_QWORD *))(*v8 + 24LL))(v8);
    }
  }
  if ( *a2 )
  {
    sub_56A6A8(v5);
    Caver::Sprite::InitWithTexture(*(Caver::Sprite **)(a1 + 120));
    *v6 = *(_OWORD *)(*(_QWORD *)(a1 + 120) + 8LL);
    Caver::Component::UpdateObjectBounds((Caver::Component *)a1);
  }
}

