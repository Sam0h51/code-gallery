/* -----------------------------------------------------------------------------
 *
 * SPDX-License-Identifier: LGPL-2.1-or-later
 * Copyright (C) 2015 by David Wells
 *
 * This file is part of the deal.II code gallery.
 *
 * -----------------------------------------------------------------------------
 */

#ifndef dealii__cdr_write_pvtu_output_h
#define dealii__cdr_write_pvtu_output_h
#include <deal.II/dofs/dof_handler.h>

// This is a small class which handles PVTU output.
namespace CDR
{
  using namespace dealii;

  class WritePVTUOutput
  {
  public:
    WritePVTUOutput(const unsigned int patch_level);

    template <int dim, typename VectorType>
    void
    write_output(const DoFHandler<dim> &dof_handler,
                 const VectorType &     solution,
                 const unsigned int     time_step_n,
                 const double           current_time);

  private:
    const unsigned int patch_level;
    const unsigned int this_mpi_process;
  };
} // namespace CDR
#endif
