/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d0444
 * Function: Caver::Proto::Polygon::~Polygon
 * Signature: undefined __thiscall ~Polygon(Polygon * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Polygon::~Polygon() */

void __thiscall Caver::Proto::Polygon::~Polygon(Polygon *this)

{
  ~Polygon(this);
  operator_delete(this);
  return;
}


