/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023D270
 * Mangled: _ZN5Caver19TextBubbleComponent21IsTextFinishedShowingEv
 * Demangled: Caver::TextBubbleComponent::IsTextFinishedShowing(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 7
 *   insn=0x000000000023D270 string=0x000000000023D274 "\t"
 *   insn=0x000000000023D274 string=0x000000000023D278 "A@"
 *   insn=0x000000000023D278 string=0x000000000023D27C ")"
 *   insn=0x000000000023D27C string=0x000000000023D280 ")"
 *   insn=0x000000000023D284 string=0x000000000023D288 "b"
 *   insn=0x000000000023D288 string=0x000000000023D294 ""
 *   insn=0x000000000023D298 string=0x000000000023D29C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::TextBubbleComponent::IsTextFinishedShowing(Caver::TextBubbleComponent *this)
{
  if ( *(_QWORD *)(*((_QWORD *)this + 15) + 128LL) < (unsigned __int64)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 15)
                                                                                              + 40LL)
                                                                                  - 24LL)
                                                                      - 1LL) )
    return 0;
  if ( *((_BYTE *)this + 116) )
    return *((_BYTE *)this + 117) == 0;
  return 1;
}

