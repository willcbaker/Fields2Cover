#pragma once
#ifndef FIELDS2COVER_ROUTE_PLANNING_SPIRAL_ORDER_H_
#define FIELDS2COVER_ROUTE_PLANNING_SPIRAL_ORDER_H_

#include "fields2cover/types.h"
#include "fields2cover/route_planning/single_cell_swaths_order_base.h"

namespace f2c::rp {

class SpiralOrder : public SingleCellSwathsOrderBase {
 public:
  SpiralOrder(int spiral_size);
  using SingleCellSwathsOrderBase::SingleCellSwathsOrderBase;

 private:
  int spiral_size;
  void sortSwaths() override;
  void spiral(size_t offset, int size)
};

}  // namespace f2c::rp

#endif  // FIELDS2COVER_ROUTE_PLANNING_SNAKE_ORDER_H_
