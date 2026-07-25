/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022AFC0
 * Mangled: _ZN5Caver29ObjectLinkControllerComponent6UpdateEf
 * Demangled: Caver::ObjectLinkControllerComponent::Update(float)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x0000000000201540  Caver::ObjectLinkControllerComponent::CreateLink(void)
 *   0x0000000000201840  Caver::ObjectLinkControllerComponent::UpdateLink(float)
 *
 * Referenced strings: 7
 *   insn=0x000000000022AFCC string=0x000000000022AFD0 "h"
 *   insn=0x000000000022AFD0 string=0x000000000022AFD4 ""
 *   insn=0x000000000022AFD4 string=0x000000000022AFD8 "h>@"
 *   insn=0x000000000022AFDC string=0x000000000022AFE0 "h:@"
 *   insn=0x000000000022AFE0 string=0x000000000022AFE4 ""
 *   insn=0x000000000022AFE4 string=0x000000000022AFE8 "h"
 *   insn=0x000000000022AFEC string=0x000000000022AFF0 "TY"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ObjectLinkControllerComponent::Update(Caver::ObjectLinkControllerComponent *this, float a2)
{
  if ( !*((_BYTE *)this + 128) && !*((_QWORD *)this + 15) && *(_QWORD *)(*((_QWORD *)this + 14) - 24LL) )
    Caver::ObjectLinkControllerComponent::CreateLink(this);
  Caver::ObjectLinkControllerComponent::UpdateLink(this, a2);
}

