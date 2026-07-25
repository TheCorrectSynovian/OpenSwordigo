/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021E4A0
 * Mangled: _ZN5Caver23BlendAnimationComponentC2Ev
 * Demangled: Caver::BlendAnimationComponent::BlendAnimationComponent(void)
 *
 * Callers: 2
 *   0x00000000001FD2A0  Caver::BlendAnimationComponent::BlendAnimationComponent(void)
 *   0x0000000000202420  Caver::BlendAnimationComponent::BlendAnimationComponent(void)
 *
 * Callees: 7
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x0000000000203040  Caver::AnimBlendNode::AnimBlendNode(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 58
 *   insn=0x000000000021E4B8 string=0x000000000021E4BC "(&"
 *   insn=0x000000000021E4BC string=0x000000000021E4C0 ""
 *   insn=0x000000000021E4C0 string=0x000000000021E4C4 "J&"
 *   insn=0x000000000021E4C4 string=0x000000000021E4C8 "J"
 *   insn=0x000000000021E4CC string=0x000000000021E4D0 "a"
 *   insn=0x000000000021E4D0 string=0x000000000021E4D4 "h"
 *   insn=0x000000000021E4D4 string=0x000000000021E4D8 "H"
 *   insn=0x000000000021E4DC string=0x000000000021E4E0 "H"
 *   insn=0x000000000021E4E0 string=0x000000000021E4E4 "KA"
 *   insn=0x000000000021E4E4 string=0x000000000021E4E8 "?"
 *   insn=0x000000000021E4EC string=0x000000000021E4F0 "k"
 *   insn=0x000000000021E4F4 string=0x000000000021E4F8 "i~"
 *   insn=0x000000000021E50C string=0x000000000021E510 "`"
 *   insn=0x000000000021E518 string=0x000000000021E51C "1\"
 *   insn=0x000000000021E51C string=0x00000000001F55E0 "P'"
 *   insn=0x000000000021E52C string=0x000000000021E530 ""
 *   insn=0x000000000021E534 string=0x000000000021E538 "`>@"
 *   insn=0x000000000021E538 string=0x000000000021E53C "t>"
 *   insn=0x000000000021E540 string=0x000000000021E544 "@"
 *   insn=0x000000000021E544 string=0x000000000021E548 ""
 *   insn=0x000000000021E548 string=0x000000000021E54C ""
 *   insn=0x000000000021E550 string=0x000000000021E554 ""
 *   insn=0x000000000021E554 string=0x000000000021E558 ""
 *   insn=0x000000000021E574 string=0x000000000021E578 "Nc"
 *   insn=0x000000000021E578 string=0x000000000021E57C "`N@"
 *   insn=0x000000000021E578 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000021E580 string=0x000000000021E584 ""
 *   insn=0x000000000021E580 string=0x000000000021E594 "@"
 *   insn=0x000000000021E584 string=0x000000000021E5B0 "`F@"
 *   insn=0x000000000021E588 string=0x000000000021E58C "`N@"
 *   insn=0x000000000021E594 string=0x000000000021E598 ""
 *   insn=0x000000000021E598 string=0x000000000021E59C ""
 *   insn=0x000000000021E5A0 string=0x000000000021E5A4 ""
 *   insn=0x000000000021E5A4 string=0x000000000021E5A8 ""
 *   insn=0x000000000021E5B4 string=0x000000000021E5B8 "@"
 *   insn=0x000000000021E5B4 string=0x000000000021E5D4 "`>@"
 *   insn=0x000000000021E5B8 string=0x000000000021E5BC ""
 *   insn=0x000000000021E5BC string=0x000000000021E5C0 ""
 *   insn=0x000000000021E5C4 string=0x000000000021E5C8 ""
 *   insn=0x000000000021E5C8 string=0x000000000021E5CC ""
 *   insn=0x000000000021E5D8 string=0x000000000021E5DC "@"
 *   insn=0x000000000021E5DC string=0x000000000021E5E0 ""
 *   insn=0x000000000021E5E0 string=0x000000000021E5E4 ""
 *   insn=0x000000000021E5E8 string=0x000000000021E5EC ""
 *   insn=0x000000000021E5EC string=0x000000000021E5F0 ""
 *   insn=0x000000000021E5FC string=0x00000000001FA4D0 "0'"
 *   insn=0x000000000021E604 string=0x000000000021E608 "Q"
 *   insn=0x000000000021E618 string=0x000000000021E61C "h"@"
 *   insn=0x000000000021E620 string=0x000000000021E624 "a"
 *   insn=0x000000000021E630 string=0x000000000021E634 "h"
 *   insn=0x000000000021E638 string=0x000000000021E63C "h"
 *   insn=0x000000000021E640 string=0x000000000021E644 "i>@"
 *   insn=0x000000000021E648 string=0x000000000021E64C "*%@"
 *   insn=0x000000000021E64C string=0x000000000021E650 "\n%"
 *   insn=0x000000000021E650 string=0x000000000021E654 " )@"
 *   insn=0x000000000021E654 string=0x000000000021E658 "  "
 *   insn=0x000000000021E658 string=0x000000000021E65C "L"
 *   insn=0x000000000021E65C string=0x000000000021E660 " %@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::BlendAnimationComponent::BlendAnimationComponent(Caver::BlendAnimationComponent *this)
{
  __int128 v2; // q0
  Caver::AnimBlendNode *v3; // x20
  _DWORD *result; // x0
  int v5; // w8

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0;
  *((_BYTE *)this + 48) = 0;
  *((_QWORD *)this + 7) = &byte_6FD2F8;
  *(_QWORD *)&v2 = &off_6B9DB0;
  *((_QWORD *)this + 9) = 0;
  *((_QWORD *)&v2 + 1) = &off_6B9DF0;
  *(_QWORD *)this = off_6B9C90;
  *((_QWORD *)this + 10) = 0;
  *((_QWORD *)this + 11) = (char *)this + 72;
  *((_QWORD *)this + 12) = (char *)this + 72;
  *((_QWORD *)this + 13) = 0;
  *((_BYTE *)this + 112) = 0;
  *((_QWORD *)this + 15) = 0;
  *((_DWORD *)this + 32) = 0;
  *((_QWORD *)this + 17) = 0;
  *((_DWORD *)this + 36) = 0;
  *((_OWORD *)this + 1) = v2;
  *((_QWORD *)this + 19) = 0;
  v3 = (Caver::AnimBlendNode *)operator new(0x30u);
  Caver::AnimBlendNode::AnimBlendNode(v3);
  ++*((_DWORD *)v3 + 2);
  result = (_DWORD *)*((_QWORD *)this + 15);
  *((_QWORD *)this + 15) = v3;
  if ( result )
  {
    v5 = result[2] - 1;
    result[2] = v5;
    if ( !v5 )
      return (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
  }
  return result;
}

