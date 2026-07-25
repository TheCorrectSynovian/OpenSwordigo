/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7770
 * Mangled: ._ZN5Caver25StringForMovementBehaviorENS_25EntityControllerComponent16MovementBehaviorE
 * Demangled: Caver::StringForMovementBehavior(Caver::EntityControllerComponent::MovementBehavior)
 *
 * Callers: 3
 *   0x000000000026AED8  Caver::EntityControllerComponent::GetEnumValuesForBindedProperty(int,std::vector<Caver::BindingValue,std::allocator<Caver::BindingValue>> *)
 *   0x000000000026B284  Caver::EntityControllerComponent::ValueForBindedProperty(int)
 *   0x000000000026D894  sub_26D894
 *
 * Callees: 1
 *   0x000000000026A5B8  Caver::StringForMovementBehavior(Caver::EntityControllerComponent::MovementBehavior)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7778 string=0x00000000001F777C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::StringForMovementBehavior()
{
  return _ZN5Caver25StringForMovementBehaviorENS_25EntityControllerComponent16MovementBehaviorE();
}

