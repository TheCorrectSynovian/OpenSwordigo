/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002401E8
 * Mangled: _ZN5Caver18TouchableComponent19ImplementsInterfaceEl
 * Demangled: Caver::TouchableComponent::ImplementsInterface(long)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000023DE3C  Caver::GUITextBubble::~GUITextBubble()
 *
 * Referenced strings: 3
 *   insn=0x00000000002401E8 string=0x00000000002401EC "}A"
 *   insn=0x00000000002401EC string=0x00000000002401F0 "?"
 *   insn=0x00000000002401EC string=0x000000000023E174 "@%"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::TouchableComponent::ImplementsInterface(
        Caver::TouchableComponent *this,
        _QWORD (*a2)(Caver::TouchableComponent *__hidden this))
{
  return a2 == Caver::TouchableComponent::Interface;
}

