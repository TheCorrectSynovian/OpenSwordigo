/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022B004
 * Mangled: _ZThn24_N5Caver29ObjectLinkControllerComponent6UpdateEf
 * Demangled: `non-virtual thunk to'Caver::ObjectLinkControllerComponent::Update(float)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x0000000000201540  Caver::ObjectLinkControllerComponent::CreateLink(void)
 *   0x0000000000201840  Caver::ObjectLinkControllerComponent::UpdateLink(float)
 *
 * Referenced strings: 7
 *   insn=0x000000000022B00C string=0x000000000022B010 ""
 *   insn=0x000000000022B014 string=0x000000000022B018 ""
 *   insn=0x000000000022B018 string=0x000000000022B01C "h>@"
 *   insn=0x000000000022B020 string=0x000000000022B024 "h:@"
 *   insn=0x000000000022B024 string=0x000000000022B028 ""
 *   insn=0x000000000022B028 string=0x000000000022B02C "h"
 *   insn=0x000000000022B030 string=0x000000000022B034 "CY"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall `non-virtual thunk to'Caver::ObjectLinkControllerComponent::Update(
        Caver::ObjectLinkControllerComponent *this,
        float a2)
{
  Caver::ObjectLinkControllerComponent *v2; // x19

  v2 = (Caver::ObjectLinkControllerComponent *)((char *)this - 24);
  if ( !*((_BYTE *)this + 104) && !*((_QWORD *)this + 12) && *(_QWORD *)(*((_QWORD *)this + 11) - 24LL) )
    Caver::ObjectLinkControllerComponent::CreateLink((Caver::ObjectLinkControllerComponent *)((char *)this - 24));
  Caver::ObjectLinkControllerComponent::UpdateLink(v2, a2);
}

