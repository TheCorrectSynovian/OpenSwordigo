/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203180
 * Mangled: ._ZN5Caver5ModelD2Ev
 * Demangled: Caver::Model::~Model()
 *
 * Callers: 2
 *   0x000000000029B708  Caver::MonsterDeathControllerComponent::className(void)
 *   0x000000000029BBD0  boost::detail::sp_counted_impl_p<Caver::Model>::dispose(void)
 *
 * Callees: 1
 *   0x000000000029BC24  Caver::Model::~Model()
 *
 * Referenced strings: 1
 *   insn=0x0000000000203188 string=0x000000000020318C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Model::~Model(Caver::Model *this)
{
  _ZN5Caver5ModelD2Ev(this);
}

