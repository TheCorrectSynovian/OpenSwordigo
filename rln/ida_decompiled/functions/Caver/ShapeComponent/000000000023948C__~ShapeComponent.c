/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023948C
 * Mangled: _ZN5Caver14ShapeComponentD2Ev
 * Demangled: Caver::ShapeComponent::~ShapeComponent()
 *
 * Callers: 1
 *   0x0000000000238F7C  Caver::ShapeComponent::DrawShape(Caver::RenderingContext *,Caver::Shape const&,Caver::Matrix4 const&)
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000002395EC  Caver::ShapeComponent::ShouldSave(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 32
 *   insn=0x0000000000239494 string=0x0000000000239498 "h%"
 *   insn=0x0000000000239498 string=0x000000000023949C "\tE"
 *   insn=0x00000000002394A0 string=0x00000000002394A4 "tB@"
 *   insn=0x00000000002394A4 string=0x00000000002394A8 "\n!"
 *   insn=0x00000000002394A8 string=0x00000000002394AC "\tA"
 *   insn=0x00000000002394AC string=0x00000000002394B0 "@"
 *   insn=0x00000000002394B0 string=0x00000000002394B4 "!"
 *   insn=0x00000000002394B8 string=0x00000000002394BC "i"
 *   insn=0x00000000002394BC string=0x00000000002394C0 "`"
 *   insn=0x00000000002394C0 string=0x00000000002394C4 "4"
 *   insn=0x00000000002394C8 string=0x00000000002394CC ""
 *   insn=0x00000000002394D8 string=0x00000000002394DC "\t@"
 *   insn=0x00000000002394E8 string=0x00000000002394EC ""
 *   insn=0x00000000002394F8 string=0x00000000002394FC "@"
 *   insn=0x0000000000239514 string=0x00000000001FA4D0 "0'"
 *   insn=0x0000000000239538 string=0x000000000023953C "h%"
 *   insn=0x000000000023953C string=0x0000000000239540 "\tE"
 *   insn=0x0000000000239544 string=0x0000000000239548 "tB@"
 *   insn=0x0000000000239548 string=0x000000000023954C "\n!"
 *   insn=0x000000000023954C string=0x0000000000239550 "\tA"
 *   insn=0x0000000000239550 string=0x0000000000239554 "@"
 *   insn=0x0000000000239554 string=0x0000000000239558 "!"
 *   insn=0x000000000023955C string=0x0000000000239560 "i"
 *   insn=0x0000000000239560 string=0x0000000000239564 "`"
 *   insn=0x0000000000239564 string=0x0000000000239568 "4"
 *   insn=0x000000000023956C string=0x0000000000239570 ""
 *   insn=0x000000000023957C string=0x0000000000239580 "\t@"
 *   insn=0x000000000023958C string=0x0000000000239590 ""
 *   insn=0x000000000023959C string=0x00000000002395A0 "@"
 *   insn=0x00000000002395BC string=0x00000000002395C0 "<"
 *   insn=0x00000000002395C0 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002395DC string=0x00000000002395E0 "4"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ShapeComponent::~ShapeComponent(Caver::ShapeComponent *this)
{
  _QWORD *v2; // x20
  __int128 v3; // q0
  __int64 v4; // x8
  __int64 v5; // x8

  v2 = (_QWORD *)*((_QWORD *)this + 16);
  *(_QWORD *)&v3 = &off_6BB6E8;
  *((_QWORD *)&v3 + 1) = &off_6BB728;
  *(_QWORD *)this = off_6BB5B0;
  *((_OWORD *)this + 1) = v3;
  if ( v2 )
  {
    v4 = v2[1] - 1LL;
    v2[1] = v4;
    if ( !v4 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v2 + 16LL))(v2);
      v5 = v2[2] - 1LL;
      v2[2] = v5;
      if ( !v5 )
        (*(void (__fastcall **)(_QWORD *))(*v2 + 24LL))(v2);
    }
  }
  Caver::Component::~Component(this);
}

