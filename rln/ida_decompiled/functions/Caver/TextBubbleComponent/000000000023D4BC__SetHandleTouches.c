/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023D4BC
 * Mangled: _ZN5Caver19TextBubbleComponent16SetHandleTouchesEb
 * Demangled: Caver::TextBubbleComponent::SetHandleTouches(bool)
 *
 * Callers: 1
 *   0x00000000001F7450  Caver::TextBubbleComponent::SetHandleTouches(bool)
 *
 * Callees: 10
 *   0x00000000001F45A0  Caver::SceneObject::AddComponent(Caver::Component *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8800  Caver::SceneObject::RemoveComponentWithIdentifier(int)
 *   0x00000000001F8AA0  Caver::TouchableComponent::TouchableComponent(void)
 *   0x00000000001FB140  Caver::GUITextBubble::SetShowsIndicatorWhenFinished(bool)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x000000000023D568  Caver::TextBubbleComponent::HandleMessage(int,void *)
 *   0x000000000023DE3C  Caver::GUITextBubble::~GUITextBubble()
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 18
 *   insn=0x000000000023D4D0 string=0x000000000023D4D4 "A%"
 *   insn=0x000000000023D4D8 string=0x000000000023D4DC "!|A"
 *   insn=0x000000000023D4DC string=0x000000000023D4E0 "@"
 *   insn=0x000000000023D4DC string=0x000000000023E174 "@%"
 *   insn=0x000000000023D4F4 string=0x00000000001FB140 "0'"
 *   insn=0x000000000023D4FC string=0x000000000023D51C "H"
 *   insn=0x000000000023D500 string=0x000000000023D504 "7"
 *   insn=0x000000000023D504 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000023D508 string=0x000000000023D50C "e"
 *   insn=0x000000000023D50C string=0x00000000001F8AA0 "0'"
 *   insn=0x000000000023D514 string=0x000000000023D518 """
 *   insn=0x000000000023D518 string=0x00000000001F45A0 "P'"
 *   insn=0x000000000023D51C string=0x000000000023D520 "hr"
 *   insn=0x000000000023D520 string=0x000000000023D524 ""
 *   insn=0x000000000023D52C string=0x000000000023D530 "a"@"
 *   insn=0x000000000023D540 string=0x00000000001F8800 "0'"
 *   insn=0x000000000023D558 string=0x000000000023D55C "U"
 *   insn=0x000000000023D55C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::TextBubbleComponent::SetHandleTouches(Caver::SceneObject **this, char a2)
{
  int *v4; // x19
  Caver::GUITextBubble *v5; // x0

  v4 = (int *)Caver::SceneObject::ComponentWithInterface(this[5], (__int64)Caver::TouchableComponent::Interface);
  v5 = this[15];
  *((_BYTE *)this + 116) = a2 & 1;
  Caver::GUITextBubble::SetShowsIndicatorWhenFinished(v5);
  if ( (a2 & 1) != 0 )
  {
    if ( !v4 )
    {
      v4 = (int *)operator new(0xA8u);
      Caver::TouchableComponent::TouchableComponent((Caver::TouchableComponent *)v4);
      Caver::SceneObject::AddComponent(this[5], (Caver::Component *)v4);
    }
    v4[28] = 1148846080;
  }
  else if ( v4 )
  {
    Caver::SceneObject::RemoveComponentWithIdentifier(this[5], v4[8]);
  }
}

