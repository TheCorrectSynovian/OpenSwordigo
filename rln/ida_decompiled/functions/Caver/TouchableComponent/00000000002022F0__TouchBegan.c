/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002022F0
 * Mangled: ._ZN5Caver18TouchableComponent10TouchBeganERKNS_7FWTouchE
 * Demangled: Caver::TouchableComponent::TouchBegan(Caver::FWTouch const&)
 *
 * Callers: 1
 *   0x0000000000468E8C  Caver::Scene::TouchBegan(Caver::FWTouch const&)
 *
 * Callees: 1
 *   0x000000000023FC5C  Caver::TouchableComponent::RegisterLibrary(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000002022F4 string=0x000000000023FD9C "u"
 *   insn=0x00000000002022F8 string=0x00000000002022FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::TouchableComponent::TouchBegan()
{
  JUMPOUT(0x23FD9C);
}

