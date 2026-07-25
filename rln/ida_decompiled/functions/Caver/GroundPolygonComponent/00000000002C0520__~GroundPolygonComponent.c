/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C0520
 * Mangled: _ZN5Caver22GroundPolygonComponentD2Ev
 * Demangled: Caver::GroundPolygonComponent::~GroundPolygonComponent()
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x00000000001FBD40  Caver::GroundPolygonComponent::InitWithComponent(Caver::GroundPolygonComponent const*)
 *   0x00000000001FFB70  Caver::Program::~Program()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 51
 *   insn=0x00000000002C0528 string=0x00000000002C052C "(!"
 *   insn=0x00000000002C052C string=0x00000000002C0530 "AC"
 *   insn=0x00000000002C0534 string=0x00000000002C0538 "`"
 *   insn=0x00000000002C0538 string=0x00000000002C053C "\n"
 *   insn=0x00000000002C053C string=0x00000000002C0540 "\tA"
 *   insn=0x00000000002C0540 string=0x00000000002C0544 ""
 *   insn=0x00000000002C0544 string=0x00000000002C0548 "@"
 *   insn=0x00000000002C054C string=0x00000000002C0550 "i"
 *   insn=0x00000000002C0550 string=0x00000000002C0554 "`"
 *   insn=0x00000000002C0558 string=0x00000000002C055C "`>@"
 *   insn=0x00000000002C055C string=0x00000000002C0560 "@"
 *   insn=0x00000000002C0560 string=0x00000000002C0564 "S"
 *   insn=0x00000000002C0564 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002C0574 string=0x00000000001FA4D0 "0'"
 *   insn=0x00000000002C057C string=0x00000000002C0580 "h"
 *   insn=0x00000000002C0584 string=0x00000000002C0588 "J"
 *   insn=0x00000000002C0598 string=0x00000000002C059C "l7"
 *   insn=0x00000000002C05A8 string=0x00000000002C05AC "(!"
 *   insn=0x00000000002C05AC string=0x00000000002C05B0 "AC"
 *   insn=0x00000000002C05B4 string=0x00000000002C05B8 "`"
 *   insn=0x00000000002C05B8 string=0x00000000002C05BC "\n"
 *   insn=0x00000000002C05BC string=0x00000000002C05C0 "\tA"
 *   insn=0x00000000002C05C0 string=0x00000000002C05C4 ""
 *   insn=0x00000000002C05C4 string=0x00000000002C05C8 "@"
 *   insn=0x00000000002C05CC string=0x00000000002C05D0 "i"
 *   insn=0x00000000002C05D0 string=0x00000000002C05D4 "`"
 *   insn=0x00000000002C05D4 string=0x00000000002C05D8 "f"
 *   insn=0x00000000002C05D8 string=0x00000000002C05DC "`>@"
 *   insn=0x00000000002C05DC string=0x00000000002C05E0 "@"
 *   insn=0x00000000002C05E0 string=0x00000000002C05E4 "3"
 *   insn=0x00000000002C05F8 string=0x00000000002C05FC "-"
 *   insn=0x00000000002C0600 string=0x00000000002C0604 ""
 *   insn=0x00000000002C060C string=0x00000000002C0610 "h"
 *   insn=0x00000000002C0614 string=0x00000000002C0618 "&"
 *   insn=0x00000000002C0624 string=0x00000000002C0628 """
 *   insn=0x00000000002C0630 string=0x00000000002C0634 "F7"
 *   insn=0x00000000002C064C string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002C0658 string=0x00000000002C065C "(!"
 *   insn=0x00000000002C065C string=0x00000000002C0660 "AC"
 *   insn=0x00000000002C0660 string=0x00000000002C0664 "*!"
 *   insn=0x00000000002C0664 string=0x00000000002C0668 "J"
 *   insn=0x00000000002C066C string=0x00000000002C0670 "\t"
 *   insn=0x00000000002C0670 string=0x00000000002C0674 "!"
 *   insn=0x00000000002C0674 string=0x00000000002C0678 "\t"
 *   insn=0x00000000002C0678 string=0x00000000002C067C "!"
 *   insn=0x00000000002C067C string=0x00000000002C0680 "I"
 *   insn=0x00000000002C0684 string=0x00000000002C0688 "!"
 *   insn=0x00000000002C068C string=0x00000000002C0690 "Ja"
 *   insn=0x00000000002C0690 string=0x00000000002C0694 "A"
 *   insn=0x00000000002C0698 string=0x00000000002C069C "`"
 *   insn=0x00000000002C06EC string=0x00000000001FBD40 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GroundPolygonComponent::~GroundPolygonComponent(Caver::GroundPolygonComponent *this)
{
  __int128 v2; // q0
  void *v3; // x0

  *(_QWORD *)&v2 = &off_6C4E98;
  *((_QWORD *)&v2 + 1) = &off_6C4ED8;
  *(_QWORD *)this = off_6C4D80;
  *((_OWORD *)this + 1) = v2;
  Caver::Program::~Program((Caver::GroundPolygonComponent *)((char *)this + 192));
  v3 = (void *)*((_QWORD *)this + 15);
  if ( v3 )
    operator delete(v3);
  Caver::Component::~Component(this);
}

