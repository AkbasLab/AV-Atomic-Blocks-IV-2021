/*
 * Copyright (c) 2020 Foretellix Ltd. All Rights Reserved.
 */

/**
 * @file
 * External functions for CPP methods.
 */

#include <cstdint>
#include <cstring>
#include <stdexcept>
#include <iostream>
#include <fstream>
#include <random>
#include "msdl_bl_1s18_lib.h"

using namespace std;
using namespace foretify;
using namespace dut_scenarios;


void dut_scenarios::bl_1s18_t::bl_1s18_trace2csv()
{
	/* Actors */
	car_t dut = top().dut().car();
	car_t npc1 = this->npc();

	/* Open a file for writing in append mode.*/
	std::ofstream outfile;
	outfile.open("trace.csv", std::ios_base::app);

	/* Write a row. */
	outfile << top().time().millisecond()  << "," <<
                "bl_1s18," <<
				top().g_info().run().run_folder() << "," <<
				top().g_info().run().seed() << "," << 
				"dut," <<
				dut.state().speed().mile_per_hour() << "," <<
				dut.state().global_position().x().feet() << "," <<
				dut.state().global_position().y().feet() << "," <<
				std::endl << 
                top().time().millisecond()  << "," <<
                "bl_1s18," <<
				top().g_info().run().run_folder() << "," <<
				top().g_info().run().seed() << "," << 
				"npc," <<
				npc1.state().speed().mile_per_hour() << "," <<
				npc1.state().global_position().x().feet() << "," <<
				npc1.state().global_position().y().feet() << "," <<
				std::endl;
}

void dut_scenarios::bl_1s18_t::end_of_run() {
    /* Open a file for writing in append mode.*/
	std::ofstream outfile;
	outfile.open("bl_1s18_trace.csv", std::ios_base::app);

    outfile << "END OF RUN at " << top().time().millisecond() << "ms" << std::endl;
}

