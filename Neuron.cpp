/*
 * Neuron.cpp
 *
 *  Created on: 15-Feb-2016
 *      Author: nain
 */

#include "Neuron.h"
namespace OCR{
Neuron::Neuron(unsigned numofOutputs)
{
	// TODO Auto-generated constructor stub
	for(unsigned  c=0; c< numofOutputs; ++c)
	{
		neuron_OutputWeight.push_back(Connection());
		neuron_OutputWeight.back().weight = randomWeight();
	}
}

Neuron::~Neuron() {
	// TODO Auto-generated destructor stub
}


void Neuron::setWeight(double value)
{

}
void Neuron::feedForwad(const Layer &prevLayer)
{
	double sum = 0.0;

		for(unsigned n=0; n< prevLayer.size(); ++n)
		{
			sum = prevLayer[n].getOutputVal() * prevLayer[n].
		}
}
}
