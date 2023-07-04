pipeline {
    agent any
    stages {
        stage('build') {
            sh 'make build';
        }
        stage('run'){
            sh 'make run';
        }
        stage('test') {
            sh 'make test';
        }
        stage('deploy') {
            sh 'make deploi';
        }
    }
}
