/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021FD9C
 * Mangled: _ZN5Caver26KeyframeAnimationComponent17InitWithAnimationERKN5boost10shared_ptrIKNS_17KeyframeAnimationEEE
 * Demangled: Caver::KeyframeAnimationComponent::InitWithAnimation(boost::shared_ptr<Caver::KeyframeAnimation const> const&)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001FF940  Caver::AnimKeysNode::InitWithAnimation(boost::shared_ptr<Caver::KeyframeAnimation const> const&)
 *   0x0000000000203A20  Caver::Component::ShouldPrepare(void)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 5
 *   insn=0x000000000021FDB4 string=0x000000000021FDB8 "`""
 *   insn=0x000000000021FDB8 string=0x000000000021FDBC ";*"
 *   insn=0x000000000021FDBC string=0x000000000021FDC0 "`J@"
 *   insn=0x000000000021FDD4 string=0x000000000021FDD8 "h"
 *   insn=0x000000000021FDE8 string=0x000000000021FDEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::KeyframeAnimationComponent::InitWithAnimation(Caver::Component *this, __int64 *a2)
{
  __int64 v2; // x1
  __int64 result; // x0

  v2 = *a2;
  if ( v2 )
  {
    sub_56A6A8((char *)this + 136, v2);
    Caver::AnimKeysNode::InitWithAnimation();
  }
  result = Caver::Component::ShouldPrepare(this);
  if ( (result & 1) != 0 )
    return (*(__int64 (__fastcall **)(Caver::Component *))(*(_QWORD *)this + 64LL))(this);
  return result;
}

