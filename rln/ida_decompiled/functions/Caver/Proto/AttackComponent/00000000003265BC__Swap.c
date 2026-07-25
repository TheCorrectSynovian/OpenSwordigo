/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003265BC
 * Mangled: _ZN5Caver5Proto15AttackComponent4SwapEPS1_
 * Demangled: Caver::Proto::AttackComponent::Swap(Caver::Proto::AttackComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 57
 *   insn=0x00000000003265BC string=0x00000000003265C0 " "
 *   insn=0x00000000003265C0 string=0x00000000003265C4 "("
 *   insn=0x00000000003265C4 string=0x00000000003265C8 "\t"
 *   insn=0x00000000003265C8 string=0x00000000003265CC ""
 *   insn=0x00000000003265CC string=0x00000000003265D0 ")"
 *   insn=0x00000000003265D0 string=0x00000000003265D4 "("
 *   insn=0x00000000003265D4 string=0x00000000003265D8 "\t"
 *   insn=0x00000000003265D8 string=0x00000000003265DC ""
 *   insn=0x00000000003265DC string=0x00000000003265E0 ")"
 *   insn=0x00000000003265E0 string=0x00000000003265E4 "("
 *   insn=0x00000000003265E4 string=0x00000000003265E8 "\t"
 *   insn=0x00000000003265E8 string=0x00000000003265EC ""
 *   insn=0x00000000003265EC string=0x00000000003265F0 ")"
 *   insn=0x00000000003265F0 string=0x00000000003265F4 "("
 *   insn=0x00000000003265F4 string=0x00000000003265F8 "\t"
 *   insn=0x00000000003265F8 string=0x00000000003265FC ""
 *   insn=0x00000000003265FC string=0x0000000000326600 ")"
 *   insn=0x0000000000326600 string=0x0000000000326604 "("
 *   insn=0x0000000000326604 string=0x0000000000326608 "\t"
 *   insn=0x0000000000326608 string=0x000000000032660C ""
 *   insn=0x000000000032660C string=0x0000000000326610 ")"
 *   insn=0x0000000000326610 string=0x0000000000326614 "((@"
 *   insn=0x0000000000326614 string=0x0000000000326618 "\t(@"
 *   insn=0x0000000000326618 string=0x000000000032661C "("
 *   insn=0x000000000032661C string=0x0000000000326620 ")("
 *   insn=0x0000000000326620 string=0x0000000000326624 "(,@"
 *   insn=0x0000000000326624 string=0x0000000000326628 "\t,@"
 *   insn=0x0000000000326628 string=0x000000000032662C ","
 *   insn=0x000000000032662C string=0x0000000000326630 "),"
 *   insn=0x0000000000326630 string=0x0000000000326634 "(0@"
 *   insn=0x0000000000326634 string=0x0000000000326638 "\t0@"
 *   insn=0x0000000000326638 string=0x000000000032663C "0"
 *   insn=0x000000000032663C string=0x0000000000326640 ")0"
 *   insn=0x0000000000326640 string=0x0000000000326644 "(4@"
 *   insn=0x0000000000326644 string=0x0000000000326648 "\t4@"
 *   insn=0x0000000000326648 string=0x000000000032664C "4"
 *   insn=0x000000000032664C string=0x0000000000326650 ")4"
 *   insn=0x0000000000326650 string=0x0000000000326654 "(8@"
 *   insn=0x0000000000326654 string=0x0000000000326658 "\t8@"
 *   insn=0x0000000000326658 string=0x000000000032665C "8"
 *   insn=0x000000000032665C string=0x0000000000326660 ")8"
 *   insn=0x0000000000326660 string=0x0000000000326664 "(<@"
 *   insn=0x0000000000326664 string=0x0000000000326668 "\t<@"
 *   insn=0x0000000000326668 string=0x000000000032666C "<"
 *   insn=0x000000000032666C string=0x0000000000326670 ")<"
 *   insn=0x0000000000326670 string=0x0000000000326674 "(@@"
 *   insn=0x0000000000326674 string=0x0000000000326678 "\t@@"
 *   insn=0x0000000000326678 string=0x000000000032667C "@"
 *   insn=0x000000000032667C string=0x0000000000326680 ")@"
 *   insn=0x0000000000326680 string=0x0000000000326684 "(@D"
 *   insn=0x0000000000326684 string=0x0000000000326688 "\t@D"
 *   insn=0x0000000000326688 string=0x000000000032668C "@"
 *   insn=0x000000000032668C string=0x0000000000326690 ")@"
 *   insn=0x0000000000326690 string=0x0000000000326694 "(@"
 *   insn=0x0000000000326694 string=0x0000000000326698 "\t@"
 *   insn=0x0000000000326698 string=0x000000000032669C ""
 *   insn=0x000000000032669C string=0x00000000003266A0 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::AttackComponent::Swap(__int64 this, Caver::Proto::AttackComponent *a2)
{
  int v2; // w9
  int v3; // w9
  int v4; // w9
  int v5; // w9
  __int64 v6; // x9
  __int64 v7; // x9

  if ( a2 != (Caver::Proto::AttackComponent *)this )
  {
    v2 = *(_DWORD *)(this + 12);
    *(_DWORD *)(this + 12) = *((_DWORD *)a2 + 3);
    *((_DWORD *)a2 + 3) = v2;
    v3 = *(_DWORD *)(this + 16);
    *(_DWORD *)(this + 16) = *((_DWORD *)a2 + 4);
    *((_DWORD *)a2 + 4) = v3;
    v4 = *(_DWORD *)(this + 20);
    *(_DWORD *)(this + 20) = *((_DWORD *)a2 + 5);
    *((_DWORD *)a2 + 5) = v4;
    v5 = *(_DWORD *)(this + 24);
    *(_DWORD *)(this + 24) = *((_DWORD *)a2 + 6);
    *((_DWORD *)a2 + 6) = v5;
    v6 = *(_QWORD *)(this + 32);
    *(_QWORD *)(this + 32) = *((_QWORD *)a2 + 4);
    *((_QWORD *)a2 + 4) = v6;
    LODWORD(v6) = *(_DWORD *)(this + 40);
    *(_DWORD *)(this + 40) = *((_DWORD *)a2 + 10);
    *((_DWORD *)a2 + 10) = v6;
    LODWORD(v6) = *(_DWORD *)(this + 44);
    *(_DWORD *)(this + 44) = *((_DWORD *)a2 + 11);
    *((_DWORD *)a2 + 11) = v6;
    LODWORD(v6) = *(_DWORD *)(this + 48);
    *(_DWORD *)(this + 48) = *((_DWORD *)a2 + 12);
    *((_DWORD *)a2 + 12) = v6;
    LODWORD(v6) = *(_DWORD *)(this + 52);
    *(_DWORD *)(this + 52) = *((_DWORD *)a2 + 13);
    *((_DWORD *)a2 + 13) = v6;
    LODWORD(v6) = *(_DWORD *)(this + 56);
    *(_DWORD *)(this + 56) = *((_DWORD *)a2 + 14);
    *((_DWORD *)a2 + 14) = v6;
    LODWORD(v6) = *(_DWORD *)(this + 60);
    *(_DWORD *)(this + 60) = *((_DWORD *)a2 + 15);
    *((_DWORD *)a2 + 15) = v6;
    LODWORD(v6) = *(_DWORD *)(this + 64);
    *(_DWORD *)(this + 64) = *((_DWORD *)a2 + 16);
    *((_DWORD *)a2 + 16) = v6;
    v7 = *(_QWORD *)(this + 68);
    *(_QWORD *)(this + 68) = *(_QWORD *)((char *)a2 + 68);
    *(_QWORD *)((char *)a2 + 68) = v7;
    LODWORD(v7) = *(_DWORD *)(this + 8);
    *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v7;
  }
  return this;
}

