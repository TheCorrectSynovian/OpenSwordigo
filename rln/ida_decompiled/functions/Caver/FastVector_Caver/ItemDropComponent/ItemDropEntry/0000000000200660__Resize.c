/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200660
 * Mangled: ._ZN5Caver10FastVectorINS_17ItemDropComponent13ItemDropEntryEE6ResizeEi
 * Demangled: Caver::FastVector<Caver::ItemDropComponent::ItemDropEntry>::Resize(int)
 *
 * Callers: 3
 *   0x0000000000275AE4  Caver::ItemDropComponent::InitWithComponent(Caver::ItemDropComponent const*)
 *   0x0000000000275BF8  Caver::ItemDropComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x0000000000277E9C  Caver::ItemDropComponent::PerformBindedAction(int)
 *
 * Callees: 1
 *   0x000000000027A464  Caver::ItemDropComponent::className(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200668 string=0x000000000020066C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::FastVector<Caver::ItemDropComponent::ItemDropEntry>::Resize()
{
  JUMPOUT(0x27A4BC);
}

